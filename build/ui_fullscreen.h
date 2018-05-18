/********************************************************************************
** Form generated from reading UI file 'fullscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLSCREEN_H
#define UI_FULLSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fullScreen
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_DisplayCam;

    void setupUi(QWidget *fullScreen)
    {
        if (fullScreen->objectName().isEmpty())
            fullScreen->setObjectName(QStringLiteral("fullScreen"));
        fullScreen->resize(657, 512);
        verticalLayout = new QVBoxLayout(fullScreen);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_DisplayCam = new QLabel(fullScreen);
        label_DisplayCam->setObjectName(QStringLiteral("label_DisplayCam"));

        verticalLayout->addWidget(label_DisplayCam);


        retranslateUi(fullScreen);

        QMetaObject::connectSlotsByName(fullScreen);
    } // setupUi

    void retranslateUi(QWidget *fullScreen)
    {
        fullScreen->setWindowTitle(QApplication::translate("fullScreen", "Form", 0));
        label_DisplayCam->setText(QApplication::translate("fullScreen", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\230\276\347\244\272\345\214\272\345\237\237</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class fullScreen: public Ui_fullScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLSCREEN_H
