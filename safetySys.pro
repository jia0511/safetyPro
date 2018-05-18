#-------------------------------------------------
#
# Project created by QtCreator 2018-05-04T17:21:49
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = safetyPro
TEMPLATE = app

SOURCES += main.cpp\
        security.cpp \
    home.cpp \
    user.cpp \
    setting.cpp \
    login.cpp \
    global.cpp \
    libabc.cpp \
    decode.cpp \
    fullscreen.cpp \
    frminput.cpp \
    Blobs.cpp

HEADERS  += security.h \
    home.h \
    user.h \
    setting.h \
    login.h \
    libabc.h \
    global.h \
    decode.h \
    TSingleIns.h \
    fullscreen.h \
    frminput.h \
    Blobs.h

FORMS    += \
    home.ui \
    user.ui \
    setting.ui \
    login.ui \
    fullscreen.ui \
    frminput.ui

LIBS    += -L/usr/local/lib/ \
        -lopencv_core -lopencv_features2d \
        -lopencv_highgui -lopencv_imgproc \
        -lopencv_ml -lopencv_video \
        -lopencv_objdetect

LIBS    += -L/usr/lib/ \
        -lavfilter -lavformat -lavcodec \
        -lavdevice -lavutil -lswscale

QMAKE_CXXFLAGS +=-msse4.2 -std=c++11 -O2 -w -static

RC_FILE+= icon.rc
RESOURCES += \
    resource.qrc
