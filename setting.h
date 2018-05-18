#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include "global.h"

namespace Ui {
class setting;
}

class setting : public QWidget
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = 0);
    ~setting();
    void showImageWithUI(cv::Mat matImage);
    void showCaptureImageWithUI(cv::Mat matImage);
    bool WriteConfigInfo(QString path, LoginInfo info);
    void GetConfigFilePath(QString& qstrCurPath,QString& qstrConfigFilePath );
    bool ReadConfigItemInfo(QString path, LoginInfo& configInfo);
    void ReadConfigFileInfo(QString filepath);
    QString CombinRtspStream(QString strCompanyType, QString strAccout,QString strPasswd,QString strIp);
    QString GetRtspStream(){return m_qstrRtspStream;}
signals:
    void display(int number);
    void backhome();
    void showFullScreen();
    void opendevice();
    void closedevice();
    void capturepress();
    void virtualKeyboardPress();
private slots:
    void on_pushButton_backhome_clicked();

    void on_pushButton_saveconfig_clicked();

    void on_pushButton_captue_clicked();

    void on_pushbutton_device_open_clicked();

    void on_pushButton_device_close_clicked();

    void on_pushButton_fullscreen_clicked();

    void on_pushbutton_virtual_keyboard_clicked();

private:
    Ui::setting *ui;

    QString m_qstrCurPath;
    QString m_qstrConfigFilePath;
    QString m_qstrRtspStream;
};

#endif // SETTING_H
