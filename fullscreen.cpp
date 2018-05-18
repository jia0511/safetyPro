#include "fullscreen.h"
#include "ui_fullscreen.h"

fullScreen::fullScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fullScreen)
{
        ui->setupUi(this);
}

fullScreen::~fullScreen()
{
        delete ui;
}

void fullScreen::mouseDoubleClickEvent(QMouseEvent *event)
{
        emit exitFullScreen();
}

void fullScreen::keyPressEvent(QKeyEvent *event)
{
        // 响应Esc键以退出程序
        if(event->key() == Qt::Key_Escape)
            emit exitFullScreen();
}

void fullScreen::showImageWithUI(cv::Mat matImage)
{
        if( matImage.empty() )  {
            return;
        }

        QImage qImage=QImage((const uchar*)matImage.data,matImage.cols,matImage.rows, matImage.step, QImage::Format_RGB888).rgbSwapped();
        ui->label_DisplayCam->setScaledContents(true);
        ui->label_DisplayCam->setPixmap(QPixmap::fromImage(qImage));
}
