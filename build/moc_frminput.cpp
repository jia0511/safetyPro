/****************************************************************************
** Meta object code from reading C++ file 'frminput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../safetySys/frminput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frminput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frmInput_t {
    QByteArrayData data[14];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_frmInput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_frmInput_t qt_meta_stringdata_frmInput = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 21),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 12),
QT_MOC_LITERAL(4, 45, 8),
QT_MOC_LITERAL(5, 54, 9),
QT_MOC_LITERAL(6, 64, 9),
QT_MOC_LITERAL(7, 74, 11),
QT_MOC_LITERAL(8, 86, 11),
QT_MOC_LITERAL(9, 98, 8),
QT_MOC_LITERAL(10, 107, 11),
QT_MOC_LITERAL(11, 119, 11),
QT_MOC_LITERAL(12, 131, 9),
QT_MOC_LITERAL(13, 141, 9)
    },
    "frmInput\0virtualKeyboardClosed\0\0"
    "focusChanged\0QWidget*\0oldWidget\0"
    "nowWidget\0btn_clicked\0changeStyle\0"
    "topColor\0bottomColor\0borderColor\0"
    "textColor\0reClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    2,   40,    2, 0x08,
       7,    0,   45,    2, 0x08,
       8,    4,   46,    2, 0x08,
      13,    0,   55,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void frmInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frmInput *_t = static_cast<frmInput *>(_o);
        switch (_id) {
        case 0: _t->virtualKeyboardClosed(); break;
        case 1: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: _t->btn_clicked(); break;
        case 3: _t->changeStyle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->reClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (frmInput::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&frmInput::virtualKeyboardClosed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject frmInput::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frmInput.data,
      qt_meta_data_frmInput,  qt_static_metacall, 0, 0}
};


const QMetaObject *frmInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmInput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmInput.stringdata))
        return static_cast<void*>(const_cast< frmInput*>(this));
    return QWidget::qt_metacast(_clname);
}

int frmInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void frmInput::virtualKeyboardClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
