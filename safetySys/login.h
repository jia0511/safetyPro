#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "global.h"

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    void  login_process();

signals:
    void display(int number);
    void virtualKeyboardPress();
    void loginSucess();
    void backhome();

private slots:

    void on_pushButton_backhome_clicked();

    void on_pushButton_login_clicked();

    void on_pushButton_findpasswd_clicked();

    void on_toolButton_clicked();

private:
    Ui::login *ui;

};

#endif // LOGIN_H
