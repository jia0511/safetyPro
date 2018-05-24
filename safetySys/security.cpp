#include "security.h"
#include "login.h"
#include "home.h"
#include "user.h"
#include "setting.h"
#include "fullscreen.h"

#include <QStackedLayout>
#include <QPushButton>
#include <QVBoxLayout>

security::security(QWidget *parent) :
    QWidget(parent)
{

    puser = new user;
    plogin = new login;
    psetting = new setting;
    pfullScreen = new fullScreen;
    phome = new home(this,puser,psetting,pfullScreen);

    pfrmInput = NULL;
    pstackLayout = new QStackedLayout;

    pstackLayout->addWidget(phome);
    pstackLayout->addWidget(puser);
    pstackLayout->addWidget(plogin);
    pstackLayout->addWidget(psetting);
    pstackLayout->addWidget(pfullScreen);

    connect(phome, &home::display, pstackLayout, &QStackedLayout::setCurrentIndex);  // 0
    connect(puser, &user::display, pstackLayout, &QStackedLayout::setCurrentIndex);              // 1

    connect(plogin, SIGNAL(loginSucess() ), this, SLOT(on_login_sucess() ) );

    connect(plogin, SIGNAL(backhome() ), this, SLOT( on_back_home() ) );//login back home

    connect(psetting, SIGNAL(backhome() ), this, SLOT( on_back_home() ) );

    connect(psetting, SIGNAL( showFullScreen() ) , this, SLOT(on_show_fullscreen() ) ); //4

    connect(psetting, SIGNAL( virtualKeyboardPress() ), this, SLOT( create_virtualKeyboard() ) );

    connect(puser, SIGNAL( showFullScreen() ) , this, SLOT(on_show_fullscreen() ) ); //4

    connect(pfullScreen, SIGNAL(exitFullScreen() ), this, SLOT(on_exit_fullscreen() ) );

    connect(plogin, SIGNAL( virtualKeyboardPress() ), this, SLOT( create_virtualKeyboard() ) );


    pmainLayout = new QVBoxLayout;
    pmainLayout->addLayout(pstackLayout);
    setLayout(pmainLayout);
}

security::~security()
{
    delete ui;
}

void security::on_back_home()
{
       pstackLayout->setCurrentIndex(0);
       destroy_virtualKeyboard();
}

void security::on_login_sucess()
{
       pstackLayout->setCurrentIndex(3);
       destroy_virtualKeyboard();
}

void security::on_show_fullscreen()
{
       this->showFullScreen();
       pstackLayout->setCurrentIndex(4);
}

void security::on_exit_fullscreen()
{
    if(this->isFullScreen() ) {
         this->showNormal();
         pstackLayout->setCurrentIndex(1);
    } else {
         this->showFullScreen();
    }
}

void security::create_virtualKeyboard()
{
        if(pfrmInput == NULL) {
            pfrmInput =   new  frmInput;
            pfrmInput ->Init("control", "lightgray", 10, 10);
            connect(pfrmInput, SIGNAL( virtualKeyboardClosed() ), this, SLOT( destroy_virtualKeyboard() ) );
        }
}

void security::destroy_virtualKeyboard()
{
    if(pfrmInput != NULL) {
        delete pfrmInput;
        pfrmInput = NULL;
    }
}
