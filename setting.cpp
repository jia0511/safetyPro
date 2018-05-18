#include "setting.h"
#include "ui_setting.h"

setting::setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setting)
{
        ui->setupUi(this);
        ui->spinBox_deviceNumber->setMinimum(1);
        ui->spinBox_deviceNumber->setMaximum(1);

        GetConfigFilePath(m_qstrCurPath, m_qstrConfigFilePath );
        ReadConfigFileInfo(m_qstrConfigFilePath);
}

setting::~setting()
{
        delete ui;
}

void setting::on_pushButton_backhome_clicked()
{
       // emit display(0);
        emit backhome();
}

void setting::showImageWithUI(cv::Mat matImage)
{
    if( matImage.empty() )  {
        return;
    }
    QImage qImage=QImage((const uchar*)matImage.data,matImage.cols,matImage.rows, matImage.step, QImage::Format_RGB888).rgbSwapped();
    qImage = qImage.scaled(640, 480);
    ui->label_DisplayCam->setPixmap(QPixmap::fromImage(qImage));
}


void setting::GetConfigFilePath(QString& qstrCurPath,QString& qstrConfigFilePath )
{
    qstrCurPath = QApplication::applicationDirPath();
    if(qstrCurPath.isEmpty()) return;
    qDebug()<<"Current path:"<<qstrCurPath;

    if(access((qstrCurPath + CONFIG_DIR).toStdString().c_str(), R_OK) != 0)
    {
        qDebug() <<"Can't found the folder!Waiting to create...";
        const mpCHAR * configDir = (qstrCurPath + CONFIG_DIR).toStdString().c_str();
        QDir dir;
        bool ok = dir.mkdir(configDir);
        if(ok != true) return;
    }

    qstrConfigFilePath = (qstrCurPath + CONFIG_DIR + "config.ini").toStdString().c_str();
   // read_device_config();
}

///<summary> Read ithem with save in config file </summary>
bool setting::ReadConfigItemInfo(QString path, LoginInfo& configInfo)
{
    if(path.isEmpty() || configInfo.strDeviceNum.isEmpty())
    {
        return false;
    }
    QSettings* config = new QSettings(path,QSettings::IniFormat);
    configInfo.strUsrName = config->value(configInfo.strDeviceNum + QString( "/usrAccount")).toString();
    configInfo.strPassword = config->value(configInfo.strDeviceNum + QString( "/password")).toString();
    configInfo.strIpaddr = config->value(configInfo.strDeviceNum + QString("/deviceIpAddr")).toString();
    configInfo.strDeviceType = config->value(configInfo.strDeviceNum + QString("/deviceCompany")).toString();
    if(mpNULL != config) {
        delete config;
        config = mpNULL;
    }
    return true;
}

QString setting::CombinRtspStream(QString strCompanyType, QString strAccout,QString strPasswd,QString strIp)
{
    // InitFfmpegFunction("rtsp://admin:admin12345@192.168.1.2:554/h264/ch1/main/av_stream");
     //InitFfmpegFunction("rtsp://admin:admin@192.168.1.118:554/cam/realmonitor?channel=1&subtype=0");
    if(strCompanyType  == "DH")
    {
        return QString("rtsp://%1:%2@%3:554/cam/realmonitor?channel=1&subtype=0").arg(strAccout).arg(strPasswd).arg(strIp);
    }
    else
    {
        return QString("rtsp://%1:%2@%3:554/h264/ch1/main/av_stream").arg(strAccout).arg(strPasswd).arg(strIp);
    }

}

void setting::ReadConfigFileInfo(QString filepath)
{
    if( filepath.isEmpty() ){
        QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("配置为空!") );
        return;
    }

    LoginInfo configInfo;
    configInfo.initLoginInfo();
    configInfo.strDeviceNum.append("device");
    configInfo.strDeviceNum += ui->spinBox_deviceNumber->text();
    mpBOOL bRet = ReadConfigItemInfo(filepath, configInfo);
    if( bRet ) {
        ui->lineEdit_account->setText(configInfo.strUsrName);
        ui->lineEdit_password->setText(configInfo.strPassword);
        ui->lineEdit_ipaddr->setText(configInfo.strIpaddr);
        if(configInfo.strDeviceType == "DH")
            ui->radioButton_dahua->setChecked(true);
        else
            ui->radioButton_haikang->setChecked(true);
    }
    m_qstrRtspStream = CombinRtspStream(configInfo.strDeviceType, configInfo.strUsrName,configInfo.strPassword,configInfo.strIpaddr);
}


///<summary> Write item info into config file </summary>
bool setting::WriteConfigInfo(QString path, LoginInfo saveInfo)
{
    if(path.isEmpty() || saveInfo.strDeviceNum.isEmpty())
    {
        return false;
    }

    QSettings* config = new QSettings(path,QSettings::IniFormat);
    config->beginGroup(saveInfo.strDeviceNum);
    config->setValue("usrAccount",saveInfo.strUsrName);
    config->setValue("password",saveInfo.strPassword);
    config->setValue("deviceIpAddr",saveInfo.strIpaddr);
    config->setValue("deviceCompany",saveInfo.strDeviceType);
    config->endArray();
    delete config;
    config = mpNULL;

    return true;
}

void setting::on_pushButton_saveconfig_clicked()
{
    LoginInfo loginInfo;
    loginInfo.initLoginInfo();
    loginInfo.strDeviceNum.append("device");
    loginInfo.strDeviceNum += ui->spinBox_deviceNumber->text();
    loginInfo.strUsrName = ui->lineEdit_account->text();
    loginInfo.strPassword = ui->lineEdit_password->text();
    loginInfo.strIpaddr = ui->lineEdit_ipaddr->text();
   if( ui->radioButton_dahua->isChecked() ) {
        loginInfo.strDeviceType = "DH";
   }else if ( ui->radioButton_haikang->isChecked() ) {
         loginInfo.strDeviceType = "HK";
   }else {
        loginInfo.strDeviceType.clear();
        QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("请选择当前设备公司!") );
   }
    qDebug()<<loginInfo.strDeviceNum;

    if( m_qstrCurPath.isEmpty() ) return;
    mpBOOL bRet = WriteConfigInfo(m_qstrConfigFilePath, loginInfo);
    if( !bRet ) {
        QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("保存失败!") );
    } else {
        QMessageBox::information(mpNULL,tr(QMESSAGEBOX_WARNING_CHINSE),tr("保存成功!") );
         m_qstrRtspStream = CombinRtspStream(loginInfo.strDeviceType, loginInfo.strUsrName, loginInfo.strPassword, loginInfo.strIpaddr);
    }
}

///<summary> Show the result video with UI show video area </summary>
void setting::showCaptureImageWithUI(cv::Mat matImage)
{
        if(matImage.empty()) return;
        QImage qImage=QImage((const uchar*)matImage.data,matImage.cols,matImage.rows,QImage::Format_RGB888).rgbSwapped();
        qImage = qImage.scaled(230, 140);
        ui->label_capture->setPixmap(QPixmap::fromImage(qImage));
}

void setting::on_pushButton_captue_clicked()
{
        emit capturepress();
}

void setting::on_pushbutton_device_open_clicked()
{
        emit opendevice();
}

void setting::on_pushButton_device_close_clicked()
{
        emit closedevice();
}

void setting::on_pushButton_fullscreen_clicked()
{
        emit showFullScreen();
}

void setting::on_pushbutton_virtual_keyboard_clicked()
{
    emit virtualKeyboardPress();
}
