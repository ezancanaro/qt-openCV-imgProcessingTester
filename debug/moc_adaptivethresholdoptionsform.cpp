/****************************************************************************
** Meta object code from reading C++ file 'adaptivethresholdoptionsform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../transformOptionsForms/adaptivethresholdoptionsform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adaptivethresholdoptionsform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adaptiveThresholdOptionsForm_t {
    QByteArrayData data[9];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adaptiveThresholdOptionsForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adaptiveThresholdOptionsForm_t qt_meta_stringdata_adaptiveThresholdOptionsForm = {
    {
QT_MOC_LITERAL(0, 0, 28), // "adaptiveThresholdOptionsForm"
QT_MOC_LITERAL(1, 29, 25), // "adaptiveOptionsBoxUpdated"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 4), // "text"
QT_MOC_LITERAL(4, 61, 26), // "thresholdOptionsBoxUpdated"
QT_MOC_LITERAL(5, 88, 18), // "constantBoxUpdated"
QT_MOC_LITERAL(6, 107, 8), // "newValue"
QT_MOC_LITERAL(7, 116, 19), // "blockSizeBoxUpdated"
QT_MOC_LITERAL(8, 136, 18) // "maxValueBoxUpdated"

    },
    "adaptiveThresholdOptionsForm\0"
    "adaptiveOptionsBoxUpdated\0\0text\0"
    "thresholdOptionsBoxUpdated\0"
    "constantBoxUpdated\0newValue\0"
    "blockSizeBoxUpdated\0maxValueBoxUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adaptiveThresholdOptionsForm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,

       0        // eod
};

void adaptiveThresholdOptionsForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adaptiveThresholdOptionsForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adaptiveOptionsBoxUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->thresholdOptionsBoxUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->constantBoxUpdated((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->blockSizeBoxUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->maxValueBoxUpdated((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject adaptiveThresholdOptionsForm::staticMetaObject = { {
    &baseOptionsForm::staticMetaObject,
    qt_meta_stringdata_adaptiveThresholdOptionsForm.data,
    qt_meta_data_adaptiveThresholdOptionsForm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adaptiveThresholdOptionsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adaptiveThresholdOptionsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adaptiveThresholdOptionsForm.stringdata0))
        return static_cast<void*>(this);
    return baseOptionsForm::qt_metacast(_clname);
}

int adaptiveThresholdOptionsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = baseOptionsForm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
