#include "home.h"
#include "ui_home.h"

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

void home:: createMosaicImage(cv::Mat inputMat,cv::Mat& outputMat, int size)
{
    cv::RNG rng;
    int height = inputMat.rows;
    int width = inputMat.cols;
    cv::Mat padding;
    cv::Mat tempMat;

    //为了方便后面的计算，将输入的图像大小扩充到宽高都是size的倍数
    copyMakeBorder(inputMat, padding, 0, size - inputMat.rows % size, 0, size - inputMat.cols % size, BORDER_REPLICATE);
    tempMat = padding.clone();

    for (int row = 0; row < padding.rows; row += size) {
        for (int col = 0; col < padding.cols; col += size) {
                int rand_x = rng.uniform(0, size);
                int rand_y = rng.uniform(0, size);
                 cv::Rect rect = cv::Rect(col, row, size, size);
                //cv::Rect rect = cv::Rect(nx, ny, nwidth, nheight);
                cv::Mat roi = tempMat(rect);
                cv::Scalar color = cv::Scalar(padding.at<Vec3b>(row + rand_y, col + rand_x)[0], \
                    padding.at<Vec3b>(row + rand_y, col + rand_x)[1], \
                    padding.at<Vec3b>(row + rand_y, col + rand_x)[2]);
                roi.setTo(color);
        }
    }

    outputMat = tempMat(cv::Rect(0, 0, width, height)).clone();
}


void home:: CheckStillPicture(cv::Mat backgroundframe,  cv::Mat matframe, cv::Mat &dstframe)
{
#if 0
    cv::Mat gray_frame, gray_matframe,imgDifference,imgThresh;

    cv::cvtColor(backgroundframe, gray_frame, CV_BGR2GRAY);
    cv::cvtColor(matframe, gray_matframe, CV_BGR2GRAY);

    cv::GaussianBlur(gray_frame, gray_frame, cv::Size(5, 5), 0);
    cv::GaussianBlur(gray_matframe, gray_matframe, cv::Size(5, 5), 0);

    cv::absdiff(gray_frame, gray_matframe, imgDifference);
    cv::threshold(imgDifference, imgThresh,30, 255.0, CV_THRESH_TOZERO);
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
#else
     cv::Mat foreground,foreground_BW, tempImage;
     //cv::Mat foreground_gray;

     cv::Mat gaussBGframe, gaussmatframe;
     cv::GaussianBlur(backgroundframe, gaussBGframe, cv::Size(5, 5), 0);
     cv::GaussianBlur(matframe, gaussmatframe, cv::Size(5, 5), 0);

     cv::absdiff(gaussBGframe, gaussmatframe, foreground);
    //  cv::cvtColor(foreground, gray_background, COLOR_BGR2GRAY);
      cv::threshold(foreground, foreground_BW, 40,255,CV_THRESH_TOZERO);

      medianBlur(foreground_BW,foreground_BW,5);     //中值滤波法
      cv::Mat element = getStructuringElement(MORPH_RECT, Size(7,7));
      erode(foreground_BW, foreground_BW, element);
      morphologyEx(foreground_BW, foreground_BW, MORPH_OPEN, element);
      dilate(foreground_BW, foreground_BW, element);
      morphologyEx(foreground_BW, foreground_BW, MORPH_CLOSE, element);

      createMosaicImage(foreground_BW, foreground_BW, 14);
/*
      cv::cvtColor(foreground_BW, foreground_gray, CV_BGR2GRAY);
      cv::Mat imgThreshCopy = foreground_gray.clone();
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
          */

      cv::addWeighted(backgroundframe, 1, foreground_BW, 1.5, 0., tempImage);
      dstframe = tempImage.clone();
 #endif
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
                    cv::Mat dstImage;
                    cv::Mat matImage = m_pDecoder->getDecodeImage().clone();
                     CheckStillPicture(backgroundFrame,matImage,dstImage);

                    m_pfullScreen->showImageWithUI(dstImage);
            }
            else
            {
                    m_pfullScreen->showImageWithUI(m_pDecoder->getDecodeImage() );
            }
    }

}

void home::on_pushButton_opencamera_clicked()
{
    /*
        if( !CheckDeviceRegisterState()  )  {
              QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("设备没有注册,请联系136324298@qq.com!") );
              return;
        }
*/
    //restricted use days
    QDateTime datetime =  QDateTime::currentDateTime();
    QString qstrCurDate = datetime.toString("yyyy-MM-dd");
    if(qstrCurDate.compare(SET_SOFTWARE_DUE_DATE) >= 0)
        {
             QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("软件已经过期!") );
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
