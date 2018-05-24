/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../safetySys/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_login_t {
    QByteArrayData data[11];
    char stringdata[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_login_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_login_t qt_meta_stringdata_login = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 7),
QT_MOC_LITERAL(2, 14, 0),
QT_MOC_LITERAL(3, 15, 6),
QT_MOC_LITERAL(4, 22, 20),
QT_MOC_LITERAL(5, 43, 11),
QT_MOC_LITERAL(6, 55, 8),
QT_MOC_LITERAL(7, 64, 30),
QT_MOC_LITERAL(8, 95, 27),
QT_MOC_LITERAL(9, 123, 32),
QT_MOC_LITERAL(10, 156, 21)
    },
    "login\0display\0\0number\0virtualKeyboardPress\0"
    "loginSucess\0backhome\0"
    "on_pushButton_backhome_clicked\0"
    "on_pushButton_login_clicked\0"
    "on_pushButton_findpasswd_clicked\0"
    "on_toolButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,
       4,    0,   57,    2, 0x06,
       5,    0,   58,    2, 0x06,
       6,    0,   59,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   60,    2, 0x08,
       8,    0,   61,    2, 0x08,
       9,    0,   62,    2, 0x08,
      10,    0,   63,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        login *_t = static_cast<login *>(_o);
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->virtualKeyboardPress(); break;
        case 2: _t->loginSucess(); break;
        case 3: _t->backhome(); break;
        case 4: _t->on_pushButton_backhome_clicked(); break;
        case 5: _t->on_pushButton_login_clicked(); break;
        case 6: _t->on_pushButton_findpasswd_clicked(); break;
        case 7: _t->on_toolButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (login::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::display)) {
                *result = 0;
            }
        }
        {
            typedef void (login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::virtualKeyboardPress)) {
                *result = 1;
            }
        }
        {
            typedef void (login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::loginSucess)) {
                *result = 2;
            }
        }
        {
            typedef void (login::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&login::backhome)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject login::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_login.data,
      qt_meta_data_login,  qt_static_metacall, 0, 0}
};


const QMetaObject *login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_login.stringdata))
        return static_cast<void*>(const_cast< login*>(this));
    return QWidget::qt_metacast(_clname);
}

int login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void login::display(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void login::virtualKeyboardPress()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void login::loginSucess()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void login::backhome()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
