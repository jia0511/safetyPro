#ifndef USER_H
#define USER_H

#include <QWidget>
#include "global.h"
//#include "decode.h"

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = 0);
    ~user();
    void showImageWithUI(cv::Mat matImage);

private slots:
    void on_pushButton_finish_clicked();
    void on_pushButton_back_clicked();

signals:
    void display(int number);
    void showFullScreen();
private:
    Ui::user *ui;
    QTimer *m_pTimer;
};

#endif // USER_H
