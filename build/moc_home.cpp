/****************************************************************************
** Meta object code from reading C++ file 'home.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../safetySys/home.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_home_t {
    QByteArrayData data[12];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_home_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_home_t qt_meta_stringdata_home = {
    {
QT_MOC_LITERAL(0, 0, 4),
QT_MOC_LITERAL(1, 5, 7),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 6),
QT_MOC_LITERAL(4, 21, 32),
QT_MOC_LITERAL(5, 54, 33),
QT_MOC_LITERAL(6, 88, 27),
QT_MOC_LITERAL(7, 116, 28),
QT_MOC_LITERAL(8, 145, 15),
QT_MOC_LITERAL(9, 161, 15),
QT_MOC_LITERAL(10, 177, 21),
QT_MOC_LITERAL(11, 199, 25)
    },
    "home\0display\0\0number\0"
    "on_pushButton_opencamera_clicked\0"
    "on_pushButton_closecamera_clicked\0"
    "on_pushButton_start_clicked\0"
    "on_pushButton_config_clicked\0"
    "on_decode_start\0on_user_clicked\0"
    "on_fullscreen_clicked\0on_capture_button_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_home[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x08,
       5,    0,   63,    2, 0x08,
       6,    0,   64,    2, 0x08,
       7,    0,   65,    2, 0x08,
       8,    0,   66,    2, 0x08,
       9,    0,   67,    2, 0x08,
      10,    0,   68,    2, 0x08,
      11,    0,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        home *_t = static_cast<home *>(_o);
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_opencamera_clicked(); break;
        case 2: _t->on_pushButton_closecamera_clicked(); break;
        case 3: _t->on_pushButton_start_clicked(); break;
        case 4: _t->on_pushButton_config_clicked(); break;
        case 5: _t->on_decode_start(); break;
        case 6: _t->on_user_clicked(); break;
        case 7: _t->on_fullscreen_clicked(); break;
        case 8: _t->on_capture_button_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (home::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&home::display)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject home::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_home.data,
      qt_meta_data_home,  qt_static_metacall, 0, 0}
};


const QMetaObject *home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *home::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_home.stringdata))
        return static_cast<void*>(const_cast< home*>(this));
    return QWidget::qt_metacast(_clname);
}

int home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void home::display(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
