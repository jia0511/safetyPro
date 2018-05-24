/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_start;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_config;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_opencamera;
    QPushButton *pushButton_closecamera;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QStringLiteral("home"));
        home->resize(900, 600);
        home->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        home->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(home);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label = new QLabel(home);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(350, 80));
        label->setStyleSheet(QStringLiteral("font: 63 20pt \"Ubuntu\";"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_start = new QPushButton(home);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setMinimumSize(QSize(200, 50));
        pushButton_start->setStyleSheet(QStringLiteral("font: 75 20pt \"Century Schoolbook L\";"));

        verticalLayout->addWidget(pushButton_start);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_config = new QPushButton(home);
        pushButton_config->setObjectName(QStringLiteral("pushButton_config"));
        pushButton_config->setMinimumSize(QSize(0, 50));
        pushButton_config->setStyleSheet(QStringLiteral("font: 75 20pt \"Century Schoolbook L\";"));

        verticalLayout->addWidget(pushButton_config);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_opencamera = new QPushButton(home);
        pushButton_opencamera->setObjectName(QStringLiteral("pushButton_opencamera"));
        pushButton_opencamera->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(pushButton_opencamera);

        pushButton_closecamera = new QPushButton(home);
        pushButton_closecamera->setObjectName(QStringLiteral("pushButton_closecamera"));
        pushButton_closecamera->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(pushButton_closecamera);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(pushButton_start, pushButton_config);
        QWidget::setTabOrder(pushButton_config, pushButton_opencamera);
        QWidget::setTabOrder(pushButton_opencamera, pushButton_closecamera);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QApplication::translate("home", "Form", 0));
        label->setText(QApplication::translate("home", "DEMO   \345\274\200   \345\247\213  \347\224\273  \351\235\242  \347\263\273  \347\273\237", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_start->setToolTip(QApplication::translate("home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Schoolbook L'; font-size:20pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\345\274\200 \345\247\213 \350\277\220 \350\241\214</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_start->setText(QApplication::translate("home", "\345\274\200  \345\247\213  \350\277\220  \350\241\214", 0));
        pushButton_config->setText(QApplication::translate("home", "\351\253\230  \347\272\247  \350\256\276  \347\275\256", 0));
        pushButton_opencamera->setText(QApplication::translate("home", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", 0));
        pushButton_closecamera->setText(QApplication::translate("home", "\345\205\263\351\227\255\346\221\204\345\203\217\345\244\264", 0));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
