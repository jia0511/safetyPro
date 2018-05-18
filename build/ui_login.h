/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *usrlineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *passwdlineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_login;
    QPushButton *pushButton_findpasswd;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_backhome;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(732, 544);
        verticalLayout_3 = new QVBoxLayout(login);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 184, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_4->addWidget(label);

        usrlineEdit = new QLineEdit(login);
        usrlineEdit->setObjectName(QStringLiteral("usrlineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usrlineEdit->sizePolicy().hasHeightForWidth());
        usrlineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(usrlineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_3->addWidget(label_2);

        passwdlineEdit = new QLineEdit(login);
        passwdlineEdit->setObjectName(QStringLiteral("passwdlineEdit"));
        sizePolicy.setHeightForWidth(passwdlineEdit->sizePolicy().hasHeightForWidth());
        passwdlineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(passwdlineEdit);

        pushButton = new QPushButton(login);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_login = new QPushButton(login);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(100, 30));
        pushButton_login->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_login);

        pushButton_findpasswd = new QPushButton(login);
        pushButton_findpasswd->setObjectName(QStringLiteral("pushButton_findpasswd"));
        sizePolicy.setHeightForWidth(pushButton_findpasswd->sizePolicy().hasHeightForWidth());
        pushButton_findpasswd->setSizePolicy(sizePolicy);
        pushButton_findpasswd->setMinimumSize(QSize(100, 30));
        pushButton_findpasswd->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_2->addWidget(pushButton_findpasswd);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 184, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_backhome = new QPushButton(login);
        pushButton_backhome->setObjectName(QStringLiteral("pushButton_backhome"));
        pushButton_backhome->setMinimumSize(QSize(100, 40));
        pushButton_backhome->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_backhome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        QWidget::setTabOrder(usrlineEdit, passwdlineEdit);
        QWidget::setTabOrder(passwdlineEdit, pushButton_findpasswd);
        QWidget::setTabOrder(pushButton_findpasswd, pushButton_login);
        QWidget::setTabOrder(pushButton_login, pushButton_backhome);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", 0));
        label->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        usrlineEdit->setPlaceholderText(QApplication::translate("login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("login", "\345\257\206    \347\240\201\357\274\232", 0));
        passwdlineEdit->setPlaceholderText(QApplication::translate("login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("login", "<html><head/><body><p><img src=\":/keyboard.png\"/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton->setWhatsThis(QApplication::translate("login", "<html><head/><body><p><img src=\":/keyboard.png\"/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("login", "\350\231\232\346\213\237\351\224\256\347\233\230", 0));
        pushButton_login->setText(QApplication::translate("login", "\347\231\273\345\275\225", 0));
        pushButton_findpasswd->setText(QApplication::translate("login", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        pushButton_backhome->setText(QApplication::translate("login", "\350\277\224\345\233\236\344\270\212\344\270\200\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
