#ifndef GLOBAL_H
#define GLOBAL_H

//MP_BGN_C_DECLS

//qt header
#include <QApplication>
#include <QWidget>
#include <QCheckBox>
#include <QListWidget>
#include <QLineEdit>
#include <QDebug>
#include <QDate>
#include <QDateTimeEdit>
#include <QTimer>
#include <QMessageBox>
#include <QSettings>
#include <QList>
#include <QDir>
#include <QByteArray>
#include <QFileDialog>
#include <QProcessEnvironment>
#include <QLibrary>
#include <QDesktopWidget>
#include <QObject>
#include <QThread>
#include <QMutex>
#include <QMutexLocker>
#include <QLabel>
#include<QKeyEvent>


//opencv header
#include "opencv2/opencv.hpp"

//c header
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>

#include <fstream>
#include <sstream>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>

#include <stdarg.h>
#include <errno.h>
#include <pthread.h>
#include <fcntl.h>
//time
#include <time.h>
#include <sys/time.h>

//c++ header
#include <iostream>

#ifdef __cplusplus
extern "C"
{
    # include <libavcodec/avcodec.h>
    # include <libavformat/avformat.h>
    # include <libswscale/swscale.h>
}
#endif

#include "libabc.h"

using namespace  std;
using namespace cv;

typedef void                    mpVOID;
typedef bool                    mpBOOL;
typedef char                     mpCHAR;
typedef unsigned char           mpBYTE;
typedef int                     mpINT;
typedef unsigned int            mpUINT;
typedef long                    mpLONG;
typedef unsigned long           mpULONG;
typedef unsigned short          mpWORD;
typedef unsigned int            mpDWORD;
typedef unsigned long long      mpQWORD;
typedef float                   mpFLOAT;
typedef double                  mpDOUBLE;

#define MP_MALLOC(s)            MP_Malloc(s)
#define MP_FREE(p)              MP_Free(p)
#define MP_NEW  				new
#define MP_DELETE       		delete

#define mpTRUE                  1
#define mpFALSE                 0
#define mpNULL                  0
#define CONFIG_DIR              "/config/"

#define QMESSAGEBOX_WARNING_CHINSE     "提示"
#define DEFAULT_MAXDEVICE_NUMBER    2
#define DEFAULT_MAXDEVICE_NAME  "maximum"

#define SET_SOFTWARE_DUE_DATE   "2018-06-01"
#define SET_SCREENSHOT_IMAGE    
#define SET_SYSTEM_LANGUAGE_CHINESE 

#define DECODE_SCREEN_HIGHT 480
#define DECODE_SCREEN_WIDTH 640
typedef struct
{
    struct tm logSec;
    mpINT logMSec;
} LogTime;


typedef struct
{
    QString strDeviceNum;
    QString strUsrName;
    QString strPassword;
    QString strIpaddr;
    QString strDeviceType;
    void initLoginInfo() {
        strDeviceNum.clear();
        strUsrName.clear();
        strPassword.clear();
        strIpaddr.clear();
        strDeviceType.clear();
    }
}LoginInfo;

//MP_END_C_DECLS

#endif // GLOBALHEAD


