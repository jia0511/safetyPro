#ifndef SECURITY_H
#define SECURITY_H

#include <QWidget>
#include"frminput.h"
class home;
class login;
class user;
class setting;
class fullScreen;
//class frmInput;
class QStackedLayout;
class QVBoxLayout;

namespace Ui {
class security;
}

class security : public QWidget
{
    Q_OBJECT

public:
    explicit security(QWidget *parent = 0);
    ~security();
private slots:
    void on_exit_fullscreen();
    void on_show_fullscreen();
    void create_virtualKeyboard();
    void destroy_virtualKeyboard();
    void on_login_sucess();
    void on_back_home();

private:
    Ui::security *ui;

    home *phome;
    user *puser;
    login *plogin;
    setting *psetting;
    fullScreen *pfullScreen;
    QStackedLayout *pstackLayout;
    QVBoxLayout *pmainLayout;
    frmInput *pfrmInput;
};

#endif // SECURITY_H
