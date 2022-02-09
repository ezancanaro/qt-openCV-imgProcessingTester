/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[513];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "updateView_setTemporaryImage"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "grayScaleButton_clicked"
QT_MOC_LITERAL(4, 65, 28), // "hsvColorFilterButton_clicked"
QT_MOC_LITERAL(5, 94, 29), // "bilateralFilterButton_clicked"
QT_MOC_LITERAL(6, 124, 26), // "gaussianBlurButton_clicked"
QT_MOC_LITERAL(7, 151, 24), // "medianBlurButton_clicked"
QT_MOC_LITERAL(8, 176, 29), // "simpleThresholdButton_clicked"
QT_MOC_LITERAL(9, 206, 31), // "adaptiveThresholdButton_clicked"
QT_MOC_LITERAL(10, 238, 27), // "subtractImageButton_clicked"
QT_MOC_LITERAL(11, 266, 19), // "morphButton_clicked"
QT_MOC_LITERAL(12, 286, 25), // "openCVSobelButton_clicked"
QT_MOC_LITERAL(13, 312, 25), // "customSobelButton_clicked"
QT_MOC_LITERAL(14, 338, 27), // "undoOperationButton_clicked"
QT_MOC_LITERAL(15, 366, 28), // "applyTransformButton_clicked"
QT_MOC_LITERAL(16, 395, 26), // "drawContoursButton_clicked"
QT_MOC_LITERAL(17, 422, 26), // "findContoursButton_clicked"
QT_MOC_LITERAL(18, 449, 28), // "on_loadImageButton_2_clicked"
QT_MOC_LITERAL(19, 478, 23), // "logErrorMessageFromForm"
QT_MOC_LITERAL(20, 502, 10) // "logMessage"

    },
    "MainWindow\0updateView_setTemporaryImage\0"
    "\0grayScaleButton_clicked\0"
    "hsvColorFilterButton_clicked\0"
    "bilateralFilterButton_clicked\0"
    "gaussianBlurButton_clicked\0"
    "medianBlurButton_clicked\0"
    "simpleThresholdButton_clicked\0"
    "adaptiveThresholdButton_clicked\0"
    "subtractImageButton_clicked\0"
    "morphButton_clicked\0openCVSobelButton_clicked\0"
    "customSobelButton_clicked\0"
    "undoOperationButton_clicked\0"
    "applyTransformButton_clicked\0"
    "drawContoursButton_clicked\0"
    "findContoursButton_clicked\0"
    "on_loadImageButton_2_clicked\0"
    "logErrorMessageFromForm\0logMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    0,  113,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    1,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateView_setTemporaryImage(); break;
        case 1: _t->grayScaleButton_clicked(); break;
        case 2: _t->hsvColorFilterButton_clicked(); break;
        case 3: _t->bilateralFilterButton_clicked(); break;
        case 4: _t->gaussianBlurButton_clicked(); break;
        case 5: _t->medianBlurButton_clicked(); break;
        case 6: _t->simpleThresholdButton_clicked(); break;
        case 7: _t->adaptiveThresholdButton_clicked(); break;
        case 8: _t->subtractImageButton_clicked(); break;
        case 9: _t->morphButton_clicked(); break;
        case 10: _t->openCVSobelButton_clicked(); break;
        case 11: _t->customSobelButton_clicked(); break;
        case 12: _t->undoOperationButton_clicked(); break;
        case 13: _t->applyTransformButton_clicked(); break;
        case 14: _t->drawContoursButton_clicked(); break;
        case 15: _t->findContoursButton_clicked(); break;
        case 16: _t->on_loadImageButton_2_clicked(); break;
        case 17: _t->logErrorMessageFromForm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
