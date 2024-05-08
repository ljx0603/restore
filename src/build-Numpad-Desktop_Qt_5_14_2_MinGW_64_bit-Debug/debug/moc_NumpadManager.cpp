/****************************************************************************
** Meta object code from reading C++ file 'NumpadManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Numpad/NumpadManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NumpadManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NumpadManager_t {
    QByteArrayData data[13];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NumpadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NumpadManager_t qt_meta_stringdata_NumpadManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NumpadManager"
QT_MOC_LITERAL(1, 14, 19), // "slot_showHideNumpad"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "slot_numpadSettings"
QT_MOC_LITERAL(4, 55, 10), // "slot_about"
QT_MOC_LITERAL(5, 66, 24), // "slot_systemTrayActivated"
QT_MOC_LITERAL(6, 91, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(7, 125, 14), // "slot_configure"
QT_MOC_LITERAL(8, 140, 17), // "slot_reloadConfig"
QT_MOC_LITERAL(9, 158, 24), // "slot_numpadMenuActivated"
QT_MOC_LITERAL(10, 183, 9), // "slot_quit"
QT_MOC_LITERAL(11, 193, 9), // "slot_help"
QT_MOC_LITERAL(12, 203, 6) // "anchor"

    },
    "NumpadManager\0slot_showHideNumpad\0\0"
    "slot_numpadSettings\0slot_about\0"
    "slot_systemTrayActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "slot_configure\0slot_reloadConfig\0"
    "slot_numpadMenuActivated\0slot_quit\0"
    "slot_help\0anchor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NumpadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x09 /* Protected */,
       3,    0,   65,    2, 0x09 /* Protected */,
       4,    0,   66,    2, 0x09 /* Protected */,
       5,    1,   67,    2, 0x09 /* Protected */,
       7,    0,   70,    2, 0x09 /* Protected */,
       8,    0,   71,    2, 0x09 /* Protected */,
       9,    0,   72,    2, 0x09 /* Protected */,
      10,    0,   73,    2, 0x09 /* Protected */,
      11,    1,   74,    2, 0x09 /* Protected */,
      11,    0,   77,    2, 0x29 /* Protected | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void NumpadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NumpadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_showHideNumpad(); break;
        case 1: _t->slot_numpadSettings(); break;
        case 2: _t->slot_about(); break;
        case 3: _t->slot_systemTrayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 4: _t->slot_configure(); break;
        case 5: _t->slot_reloadConfig(); break;
        case 6: _t->slot_numpadMenuActivated(); break;
        case 7: _t->slot_quit(); break;
        case 8: _t->slot_help((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slot_help(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NumpadManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NumpadManager.data,
    qt_meta_data_NumpadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NumpadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NumpadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NumpadManager.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NumpadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
