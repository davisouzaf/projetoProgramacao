/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../projeto/mainwindow.h"
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
    QByteArrayData data[18];
    char stringdata0[432];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_pushButtonDim_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_pushButtonCutBox_clicked"
QT_MOC_LITERAL(4, 65, 22), // "on_ColorButton_clicked"
QT_MOC_LITERAL(5, 88, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 112, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(7, 137, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 159, 33), // "on_horizontalSliderZ_valueCha..."
QT_MOC_LITERAL(9, 193, 5), // "value"
QT_MOC_LITERAL(10, 199, 28), // "on_actionSave_File_triggered"
QT_MOC_LITERAL(11, 228, 29), // "on_actionView_solid_triggered"
QT_MOC_LITERAL(12, 258, 30), // "on_pushButtonPutSphere_clicked"
QT_MOC_LITERAL(13, 289, 30), // "on_pushButtonCurSphere_clicked"
QT_MOC_LITERAL(14, 320, 27), // "on_pushButtonPutBox_clicked"
QT_MOC_LITERAL(15, 348, 29), // "on_pushButtonPutEllip_clicked"
QT_MOC_LITERAL(16, 378, 29), // "on_pushButtonCutEllip_clicked"
QT_MOC_LITERAL(17, 408, 23) // "on_actionExit_triggered"

    },
    "MainWindow\0on_pushButtonDim_clicked\0"
    "\0on_pushButtonCutBox_clicked\0"
    "on_ColorButton_clicked\0on_pushButton_2_clicked\0"
    "on_actionAbout_triggered\0on_pushButton_clicked\0"
    "on_horizontalSliderZ_valueChanged\0"
    "value\0on_actionSave_File_triggered\0"
    "on_actionView_solid_triggered\0"
    "on_pushButtonPutSphere_clicked\0"
    "on_pushButtonCurSphere_clicked\0"
    "on_pushButtonPutBox_clicked\0"
    "on_pushButtonPutEllip_clicked\0"
    "on_pushButtonCutEllip_clicked\0"
    "on_actionExit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonDim_clicked(); break;
        case 1: _t->on_pushButtonCutBox_clicked(); break;
        case 2: _t->on_ColorButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_actionAbout_triggered(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_horizontalSliderZ_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_actionSave_File_triggered(); break;
        case 8: _t->on_actionView_solid_triggered(); break;
        case 9: _t->on_pushButtonPutSphere_clicked(); break;
        case 10: _t->on_pushButtonCurSphere_clicked(); break;
        case 11: _t->on_pushButtonPutBox_clicked(); break;
        case 12: _t->on_pushButtonPutEllip_clicked(); break;
        case 13: _t->on_pushButtonCutEllip_clicked(); break;
        case 14: _t->on_actionExit_triggered(); break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
