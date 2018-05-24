#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user),
    m_pTimer(NULL)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_pushButton_finish_clicked()
{
    emit showFullScreen();
}

void user::on_pushButton_back_clicked()
{
        emit display(0);
}

void user::showImageWithUI(cv::Mat matImage)
{
    if( matImage.empty() )  {
        return;
    }
    QImage qImage=QImage((const uchar*)matImage.data,matImage.cols,matImage.rows, matImage.step, QImage::Format_RGB888).rgbSwapped();
    qImage = qImage.scaled(640, 480);
    ui->label_DisplayCam->setPixmap(QPixmap::fromImage(qImage));
}
