/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

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

class Ui_user
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_DisplayCam;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_action;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_finish;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QStringLiteral("user"));
        user->resize(675, 633);
        verticalLayout_2 = new QVBoxLayout(user);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_DisplayCam = new QLabel(user);
        label_DisplayCam->setObjectName(QStringLiteral("label_DisplayCam"));

        horizontalLayout_2->addWidget(label_DisplayCam);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_action = new QLabel(user);
        label_action->setObjectName(QStringLiteral("label_action"));
        label_action->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";"));
        label_action->setWordWrap(true);

        verticalLayout->addWidget(label_action);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_finish = new QPushButton(user);
        pushButton_finish->setObjectName(QStringLiteral("pushButton_finish"));
        pushButton_finish->setMinimumSize(QSize(120, 50));
        pushButton_finish->setStyleSheet(QString::fromUtf8("font: 75 20pt \"\351\273\221\344\275\223\";"));

        horizontalLayout->addWidget(pushButton_finish);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_back = new QPushButton(user);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setMinimumSize(QSize(100, 40));
        pushButton_back->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_3->addWidget(pushButton_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QApplication::translate("user", "Form", 0));
        label_DisplayCam->setText(QApplication::translate("user", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\230\276\347\244\272\345\214\272\345\237\237</span></p></body></html>", 0));
        label_action->setText(QApplication::translate("user", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600;\">\346\263\250\346\204\217\344\272\213\351\241\271</span></p><p><span style=\" font-size:28pt; font-weight:600;\">\346\223\215\344\275\234\346\255\245\351\252\244</span></p><p><span style=\" font-size:11pt; font-weight:400;\">1\343\200\201\346\211\200\346\234\211\344\272\272\345\221\230\347\246\273\345\274\200\347\224\273\351\235\242\345\206\205</span></p><p><span style=\" font-size:11pt; font-weight:400;\">2\343\200\201\350\257\267\350\260\203\346\225\264\346\221\204\345\203\217\345\244\264\345\210\260\345\220\210\351\200\202\344\275\215\347\275\256</span></p><p><span style=\" font-size:11pt; font-weight:400;\">3\343\200\201\350\257\267\345\213\277\347\247\273\345\212\250\346\221\204\345\203\217\346\234\272\345\217\212\347\224\273\351\235\242\345\206\205\347\211\251\345\223\201</span></p><p><span style=\" font-size:11pt; font-weight:400;\">4\343\200\201\347\202\271\345\207\273\345\256\214\346\210\220\357\274\214\350\257\201\344\272\272\350\277"
                        "\233\345\205\245\347\224\273\351\235\242\345\235\220\345\256\232</span></p><p><span style=\" font-size:11pt; font-weight:400;\">5.\345\217\252\346\230\257\346\265\213\350\257\225</span></p></body></html>", 0));
        pushButton_finish->setText(QApplication::translate("user", "\345\256\214\346\210\220", 0));
        pushButton_back->setText(QApplication::translate("user", "\350\277\224\345\233\236\344\270\212\344\270\200\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
