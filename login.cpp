#include "login.h"
#include "ui_login.h"
#include"frminput.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_backhome_clicked()
{
        //emit display(0);
          emit backhome();
}

void  login::login_process()
{
        ui->usrlineEdit->clear(); //清空姓名nameLine
        ui->passwdlineEdit->clear();  //清空密码passwardLine
}

void login::on_pushButton_login_clicked()
{
        if(this->ui->usrlineEdit->text().trimmed() == tr("admin") &&
           this->ui->passwdlineEdit->text().trimmed()== tr("admin"))  //去除lineEdit内的用户名和密码进行校验
        {
                //登陆成功后显示对话框
                //emit display(3);
                emit loginSucess();
                login_process();
        }
        else
        {
                //用户输入存在错误
                QMessageBox::warning(this,tr("提示"),tr("你的账户或密码错误！"),QMessageBox::Yes);
                login_process();
        }
}

void login::on_pushButton_findpasswd_clicked()
{
      QMessageBox::warning(this,tr("提示"),tr("请联系136324298@qq.com！"),QMessageBox::Yes);
}

void login::on_pushButton_clicked()
{
        emit virtualKeyboardPress();
}
