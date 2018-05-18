/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_DisplayCam;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_devname;
    QSpinBox *spinBox_deviceNumber;
    QPushButton *pushbutton_virtual_keyboard;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushbutton_device_open;
    QPushButton *pushButton_device_close;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_capture;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_captue;
    QPushButton *pushButton_fullscreen;
    QGroupBox *groupBox_configArea;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_usr;
    QLineEdit *lineEdit_account;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ipaddr;
    QLineEdit *lineEdit_ipaddr;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QRadioButton *radioButton_dahua;
    QRadioButton *radioButton_haikang;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_saveconfig;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_backhome;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QStringLiteral("setting"));
        setting->resize(900, 625);
        horizontalLayout_10 = new QHBoxLayout(setting);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_DisplayCam = new QLabel(setting);
        label_DisplayCam->setObjectName(QStringLiteral("label_DisplayCam"));
        label_DisplayCam->setMinimumSize(QSize(640, 480));

        verticalLayout_2->addWidget(label_DisplayCam);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_devname = new QLabel(setting);
        label_devname->setObjectName(QStringLiteral("label_devname"));

        horizontalLayout_7->addWidget(label_devname);

        spinBox_deviceNumber = new QSpinBox(setting);
        spinBox_deviceNumber->setObjectName(QStringLiteral("spinBox_deviceNumber"));

        horizontalLayout_7->addWidget(spinBox_deviceNumber);

        pushbutton_virtual_keyboard = new QPushButton(setting);
        pushbutton_virtual_keyboard->setObjectName(QStringLiteral("pushbutton_virtual_keyboard"));

        horizontalLayout_7->addWidget(pushbutton_virtual_keyboard);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushbutton_device_open = new QPushButton(setting);
        pushbutton_device_open->setObjectName(QStringLiteral("pushbutton_device_open"));

        horizontalLayout_8->addWidget(pushbutton_device_open);

        pushButton_device_close = new QPushButton(setting);
        pushButton_device_close->setObjectName(QStringLiteral("pushButton_device_close"));

        horizontalLayout_8->addWidget(pushButton_device_close);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_capture = new QLabel(setting);
        label_capture->setObjectName(QStringLiteral("label_capture"));
        label_capture->setMinimumSize(QSize(230, 140));

        verticalLayout_4->addWidget(label_capture);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_captue = new QPushButton(setting);
        pushButton_captue->setObjectName(QStringLiteral("pushButton_captue"));

        horizontalLayout_6->addWidget(pushButton_captue);

        pushButton_fullscreen = new QPushButton(setting);
        pushButton_fullscreen->setObjectName(QStringLiteral("pushButton_fullscreen"));

        horizontalLayout_6->addWidget(pushButton_fullscreen);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_4);

        groupBox_configArea = new QGroupBox(setting);
        groupBox_configArea->setObjectName(QStringLiteral("groupBox_configArea"));
        groupBox_configArea->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(groupBox_configArea);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_usr = new QLabel(groupBox_configArea);
        label_usr->setObjectName(QStringLiteral("label_usr"));

        horizontalLayout_2->addWidget(label_usr);

        lineEdit_account = new QLineEdit(groupBox_configArea);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));

        horizontalLayout_2->addWidget(lineEdit_account);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_password = new QLabel(groupBox_configArea);
        label_password->setObjectName(QStringLiteral("label_password"));

        horizontalLayout_3->addWidget(label_password);

        lineEdit_password = new QLineEdit(groupBox_configArea);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        horizontalLayout_3->addWidget(lineEdit_password);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ipaddr = new QLabel(groupBox_configArea);
        label_ipaddr->setObjectName(QStringLiteral("label_ipaddr"));

        horizontalLayout_4->addWidget(label_ipaddr);

        lineEdit_ipaddr = new QLineEdit(groupBox_configArea);
        lineEdit_ipaddr->setObjectName(QStringLiteral("lineEdit_ipaddr"));

        horizontalLayout_4->addWidget(lineEdit_ipaddr);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label = new QLabel(groupBox_configArea);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_9->addWidget(label);

        radioButton_dahua = new QRadioButton(groupBox_configArea);
        radioButton_dahua->setObjectName(QStringLiteral("radioButton_dahua"));
        radioButton_dahua->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_9->addWidget(radioButton_dahua);

        radioButton_haikang = new QRadioButton(groupBox_configArea);
        radioButton_haikang->setObjectName(QStringLiteral("radioButton_haikang"));
        radioButton_haikang->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_9->addWidget(radioButton_haikang);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton_saveconfig = new QPushButton(groupBox_configArea);
        pushButton_saveconfig->setObjectName(QStringLiteral("pushButton_saveconfig"));

        horizontalLayout_5->addWidget(pushButton_saveconfig);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_backhome = new QPushButton(groupBox_configArea);
        pushButton_backhome->setObjectName(QStringLiteral("pushButton_backhome"));
        pushButton_backhome->setMinimumSize(QSize(120, 40));
        pushButton_backhome->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_backhome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(groupBox_configArea);


        horizontalLayout_10->addLayout(verticalLayout_5);

        QWidget::setTabOrder(spinBox_deviceNumber, pushbutton_virtual_keyboard);
        QWidget::setTabOrder(pushbutton_virtual_keyboard, pushbutton_device_open);
        QWidget::setTabOrder(pushbutton_device_open, pushButton_device_close);
        QWidget::setTabOrder(pushButton_device_close, pushButton_captue);
        QWidget::setTabOrder(pushButton_captue, pushButton_fullscreen);
        QWidget::setTabOrder(pushButton_fullscreen, lineEdit_account);
        QWidget::setTabOrder(lineEdit_account, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, lineEdit_ipaddr);
        QWidget::setTabOrder(lineEdit_ipaddr, pushButton_saveconfig);

        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QWidget *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Form", 0));
        label_DisplayCam->setText(QApplication::translate("setting", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\230\276\347\244\272\345\214\272\345\237\237</span></p></body></html>", 0));
        label_devname->setText(QApplication::translate("setting", " \350\256\276\345\244\207\345\272\217\345\217\267", 0));
        pushbutton_virtual_keyboard->setText(QApplication::translate("setting", "\350\231\232\346\213\237\351\224\256\347\233\230", 0));
        pushbutton_device_open->setText(QApplication::translate("setting", "\346\211\223\345\274\200\350\256\276\345\244\207", 0));
        pushButton_device_close->setText(QApplication::translate("setting", "\345\205\263\351\227\255\350\256\276\345\244\207", 0));
        label_capture->setText(QApplication::translate("setting", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\230\276\347\244\272\345\214\272\345\237\237</span></p></body></html>", 0));
        pushButton_captue->setText(QApplication::translate("setting", "\346\212\223\345\217\226", 0));
        pushButton_fullscreen->setText(QApplication::translate("setting", "\345\205\250\345\261\217\346\230\276\347\244\272", 0));
        groupBox_configArea->setTitle(QApplication::translate("setting", "\351\205\215\347\275\256\345\214\272\345\237\237", 0));
        label_usr->setText(QApplication::translate("setting", "\347\224\250\346\210\267\345\220\215\357\274\232", 0));
        label_password->setText(QApplication::translate("setting", "\345\257\206    \347\240\201\357\274\232", 0));
        label_ipaddr->setText(QApplication::translate("setting", "\350\256\276\347\275\256IP\357\274\232", 0));
        label->setText(QApplication::translate("setting", "\350\256\276\345\244\207\345\205\254\345\217\270\357\274\232", 0));
        radioButton_dahua->setText(QApplication::translate("setting", "\345\244\247\345\215\216", 0));
        radioButton_haikang->setText(QApplication::translate("setting", "\346\265\267\345\272\267", 0));
        pushButton_saveconfig->setText(QApplication::translate("setting", "\344\277\235  \345\255\230", 0));
        pushButton_backhome->setText(QApplication::translate("setting", "\351\200\200  \345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
