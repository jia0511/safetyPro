#include "home.h"
#include "ui_home.h"
#include "Blobs.h"

home::home(QWidget *parent, user *pusr, setting *psetting, fullScreen* pfullScreen) :
    QWidget(parent),
    ui(new Ui::home),
    m_pDecoder(NULL),
    m_pTimer(NULL),
    m_puser(pusr),
    m_psetting(psetting),
    m_pfullScreen(pfullScreen),
    m_bFullScreenPlay(false),
    m_bSettingCapturePress(false)
{
    ui->setupUi(this);
    m_pTimer = new QTimer(this);
    setWindowIcon(QIcon(" icon.ico"));
    connect(m_pTimer,SIGNAL(timeout()),this,SLOT( on_decode_start() ) );
    connect(m_puser, SIGNAL( showFullScreen() ) , this, SLOT(on_user_clicked() ) );
    connect(m_pfullScreen, SIGNAL(exitFullScreen() ), this, SLOT(on_fullscreen_clicked() ) );
    connect(m_psetting, SIGNAL( showFullScreen() ) , this, SLOT(on_user_clicked() ) ); //4

    connect(m_psetting, SIGNAL( capturepress() ), this, SLOT( on_capture_button_clicked() ) );
    connect(m_psetting, SIGNAL( opendevice() ), this, SLOT( on_pushButton_opencamera_clicked() ) );
    connect(m_psetting, SIGNAL( closedevice() ), this, SLOT( on_pushButton_closecamera_clicked() ) );
}

home::~home()
{
    delete ui;
    deleteDecoder();
}

void home::deleteDecoder()
{
    if(mpNULL != m_pDecoder)
    {
        delete m_pDecoder;
        m_pDecoder = mpNULL;
    }
}

void home::on_fullscreen_clicked()
{
     m_bFullScreenPlay = false;
}

void home::on_user_clicked()
{
    m_bFullScreenPlay = true;
    m_bFirstFrameFlag  = true;
}

bool home::CheckDeviceRegisterState()
{
    if(0 == Check_Device_Register_State(NULL))
           return true;
    else
            return false;
}

void home:: CheckStillPicture(cv::Mat backgroundframe,  cv::Mat matframe, cv::Mat &dstframe, std::vector<std::vector<cv::Point> > &new_contours)
{
    cv::Mat gray_frame, gray_matframe,imgDifference,imgThresh;

    cv::cvtColor(backgroundframe, gray_frame, CV_BGR2GRAY);
    cv::cvtColor(matframe, gray_matframe, CV_BGR2GRAY);

    cv::GaussianBlur(gray_frame, gray_frame, cv::Size(5, 5), 0);
    cv::GaussianBlur(gray_matframe, gray_matframe, cv::Size(5, 5), 0);

    cv::absdiff(gray_frame, gray_matframe, imgDifference);
    cv::threshold(imgDifference, imgThresh,30, 255.0, CV_THRESH_BINARY);
    cv::Mat structuringElement5x5 = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
    cv::dilate(imgThresh, imgThresh, structuringElement5x5);
    cv::dilate(imgThresh, imgThresh, structuringElement5x5);
    cv::erode(imgThresh, imgThresh, structuringElement5x5);
    //Mat trainImg = Mat::zeros(ImgHeight, ImgWidht, CV_8UC3);
    cv::Mat imgThreshCopy = imgThresh.clone();
    std::vector<std::vector<cv::Point> > contours;
    cv::findContours(imgThreshCopy, contours, cv::RETR_TREE, cv::CHAIN_APPROX_TC89_KCOS);

    cv::Mat dstImage = matframe.clone();
    for( int i = 0; i< contours.size(); i++ )
    {
        if ( fabs(contourArea(Mat(contours[i])) ) > 1000)
        {
            cv::drawContours(dstImage, contours,i, cv::Scalar(255.0, 255.0, 255.0), -1, 8);
        }
    }
    dstframe = dstImage.clone();


#if 1    //convexHulls or approxPolyDP
    std::vector<std::vector<cv::Point> > convexHulls(contours.size());
    for (unsigned int i = 0; i < contours.size(); i++) {
        cv::convexHull(contours[i], convexHulls[i]);
    }
    std::vector<Blobs> currentFrameBlobs;
    for (auto &convexHull : convexHulls) {
        Blobs possibleBlob(convexHull);
#else
    std::vector<std::vector<cv::Point>> contours_poly(contours.size());

    for (int i = 0; i<contours.size(); i++)
    {
        cv::approxPolyDP(Mat(contours[i]), contours_poly[i], 5, true);
    }
    std::vector<Blobs> currentFrameBlobs;
    for (auto &approxPolyDP : contours_poly) {
        Blobs possibleBlob(approxPolyDP);
#endif
        currentFrameBlobs.push_back(possibleBlob);
    }

    for (auto &blob : currentFrameBlobs) {
        if (blob.blnStillBeingTracked == true) {

            double b=cv::contourArea(blob.currentContour,false);
            if(b > 200)
                new_contours.push_back(blob.currentContour);
        }
    }
    currentFrameBlobs.clear();

}

void home::on_capture_button_clicked()
{
    m_bSettingCapturePress = true;
    qDebug()<<"on_capture_button_clicked";
}

void home::on_decode_start()
{
    if(m_pDecoder == NULL )
    {
        if(m_psetting->GetRtspStream().isEmpty() )
        {
            QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("请配置当前设备,保存后重启软件!") );
        }
       m_pDecoder = new decode();
       m_pDecoder->InitFfmpegFunction(  m_psetting->GetRtspStream().toStdString().c_str() );
    }

    m_pDecoder->onDecodeframe();
    m_puser->showImageWithUI(m_pDecoder->getDecodeImage());
    m_psetting->showImageWithUI(m_pDecoder->getDecodeImage());

    if(m_bSettingCapturePress)  {
         m_pDecoder->getDecodeImage().copyTo( backgroundFrame );
         m_bSettingCapturePress = false;
    }
    if( !backgroundFrame.empty() )
    {
        m_psetting->showCaptureImageWithUI(backgroundFrame);
    }

    if(  m_bFullScreenPlay )
    {
            if(m_bFirstFrameFlag )  {
                 m_pDecoder->getDecodeImage().copyTo( backgroundFrame );
                 m_bFirstFrameFlag = false;
            }
            if( !backgroundFrame.empty())
            {
                    cv::Mat tempImage,dstImage;
                    cv::Mat matImage = m_pDecoder->getDecodeImage().clone();
                    std::vector<std::vector<cv::Point> > contours;
                     matImage.copyTo(dstImage);
                     CheckStillPicture(backgroundFrame,matImage,tempImage,contours);
                     for( int i = 0; i< contours.size(); i++ )
                     {
                         cv::drawContours(dstImage, contours,i, cv::Scalar(255.0, 255.0, 255.0), -1, 8);
                     }
                    m_pfullScreen->showImageWithUI(tempImage);
            }
            else
            {
                    m_pfullScreen->showImageWithUI(m_pDecoder->getDecodeImage() );
            }
    }

}

void home::on_pushButton_opencamera_clicked()
{
        if( !CheckDeviceRegisterState()  )  {
              QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("设备没有注册,请联系136324298@qq.com!") );
              return;
        }
        QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("设备打开成功!") );
        m_pTimer->start(10);
}

void home::on_pushButton_closecamera_clicked()
{
        m_pTimer->stop();
        deleteDecoder();
        QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("设备关闭成功!") );
}

void home::on_pushButton_start_clicked()
{
        emit display(1);
}

void home::on_pushButton_config_clicked()
{
        emit display(2);
}
