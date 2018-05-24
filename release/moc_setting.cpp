/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../safetySys/setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_setting_t {
    QByteArrayData data[17];
    char stringdata[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_setting_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_setting_t qt_meta_stringdata_setting = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 7),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 6),
QT_MOC_LITERAL(4, 24, 8),
QT_MOC_LITERAL(5, 33, 14),
QT_MOC_LITERAL(6, 48, 10),
QT_MOC_LITERAL(7, 59, 11),
QT_MOC_LITERAL(8, 71, 12),
QT_MOC_LITERAL(9, 84, 20),
QT_MOC_LITERAL(10, 105, 30),
QT_MOC_LITERAL(11, 136, 32),
QT_MOC_LITERAL(12, 169, 28),
QT_MOC_LITERAL(13, 198, 33),
QT_MOC_LITERAL(14, 232, 34),
QT_MOC_LITERAL(15, 267, 32),
QT_MOC_LITERAL(16, 300, 21)
    },
    "setting\0display\0\0number\0backhome\0"
    "showFullScreen\0opendevice\0closedevice\0"
    "capturepress\0virtualKeyboardPress\0"
    "on_pushButton_backhome_clicked\0"
    "on_pushButton_saveconfig_clicked\0"
    "on_pushButton_captue_clicked\0"
    "on_pushbutton_device_open_clicked\0"
    "on_pushButton_device_close_clicked\0"
    "on_pushButton_fullscreen_clicked\0"
    "on_toolbutton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_setting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       4,    0,   87,    2, 0x06,
       5,    0,   88,    2, 0x06,
       6,    0,   89,    2, 0x06,
       7,    0,   90,    2, 0x06,
       8,    0,   91,    2, 0x06,
       9,    0,   92,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,   93,    2, 0x08,
      11,    0,   94,    2, 0x08,
      12,    0,   95,    2, 0x08,
      13,    0,   96,    2, 0x08,
      14,    0,   97,    2, 0x08,
      15,    0,   98,    2, 0x08,
      16,    0,   99,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void setting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        setting *_t = static_cast<setting *>(_o);
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->backhome(); break;
        case 2: _t->showFullScreen(); break;
        case 3: _t->opendevice(); break;
        case 4: _t->closedevice(); break;
        case 5: _t->capturepress(); break;
        case 6: _t->virtualKeyboardPress(); break;
        case 7: _t->on_pushButton_backhome_clicked(); break;
        case 8: _t->on_pushButton_saveconfig_clicked(); break;
        case 9: _t->on_pushButton_captue_clicked(); break;
        case 10: _t->on_pushbutton_device_open_clicked(); break;
        case 11: _t->on_pushButton_device_close_clicked(); break;
        case 12: _t->on_pushButton_fullscreen_clicked(); break;
        case 13: _t->on_toolbutton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (setting::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::display)) {
                *result = 0;
            }
        }
        {
            typedef void (setting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::backhome)) {
                *result = 1;
            }
        }
        {
            typedef void (setting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::showFullScreen)) {
                *result = 2;
            }
        }
        {
            typedef void (setting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::opendevice)) {
                *result = 3;
            }
        }
        {
            typedef void (setting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::closedevice)) {
                *result = 4;
            }
        }
        {
            typedef void (setting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::capturepress)) {
                *result = 5;
            }
        }
        {
            typedef void (setting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&setting::virtualKeyboardPress)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject setting::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_setting.data,
      qt_meta_data_setting,  qt_static_metacall, 0, 0}
};


const QMetaObject *setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *setting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setting.stringdata))
        return static_cast<void*>(const_cast< setting*>(this));
    return QWidget::qt_metacast(_clname);
}

int setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void setting::display(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void setting::backhome()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void setting::showFullScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void setting::opendevice()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void setting::closedevice()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void setting::capturepress()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void setting::virtualKeyboardPress()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
