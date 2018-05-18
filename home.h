#ifndef HOME_H
#define HOME_H


#include "global.h"
#include "decode.h"
#include "user.h"
#include "setting.h"
#include "fullscreen.h"


namespace Ui {
class home;
}
class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent, user *pusr, setting *psetting, fullScreen* pfullScreen);
    ~home();
    void deleteDecoder();
    void showImageWithUI(cv::Mat matImage);
    bool CheckDeviceRegisterState();
    void CheckStillPicture(cv::Mat backgroundframe, cv::Mat matframe,cv::Mat &dstframe,
                           std::vector<std::vector<cv::Point> > &new_contours);
private slots:
    void on_pushButton_opencamera_clicked();

    void on_pushButton_closecamera_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_config_clicked();

    void on_decode_start();

    void on_user_clicked();

    void on_fullscreen_clicked() ;

    void on_capture_button_clicked();

signals:
    void display(int number);

private:
    Ui::home *ui;
    decode *m_pDecoder;
    QTimer *m_pTimer;
    user* m_puser;
    setting *m_psetting;
    fullScreen* m_pfullScreen;
    bool m_bFullScreenPlay;
    cv::Mat backgroundFrame;
    bool m_bFirstFrameFlag;
    bool m_bSettingCapturePress;
};

#endif // HOME_H
