/****************************************************************************
** Meta object code from reading C++ file 'dndnumpad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dndnumpad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dndnumpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DndNumpad_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DndNumpad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DndNumpad_t qt_meta_stringdata_DndNumpad = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DndNumpad"
QT_MOC_LITERAL(1, 10, 16), // "slot_btnInserted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "slot_btnRemoved"
QT_MOC_LITERAL(4, 44, 8), // "BtnShape"
QT_MOC_LITERAL(5, 53, 13), // "slot_toSqrBtn"
QT_MOC_LITERAL(6, 67, 16), // "slot_toBigVerBtn"
QT_MOC_LITERAL(7, 84, 16), // "slot_toBigHorBtn"
QT_MOC_LITERAL(8, 101, 20), // "slot_applyBtnClicked"
QT_MOC_LITERAL(9, 122, 9), // "slot_copy"
QT_MOC_LITERAL(10, 132, 10), // "slot_paste"
QT_MOC_LITERAL(11, 143, 18) // "slot_linkActivated"

    },
    "DndNumpad\0slot_btnInserted\0\0slot_btnRemoved\0"
    "BtnShape\0slot_toSqrBtn\0slot_toBigVerBtn\0"
    "slot_toBigHorBtn\0slot_applyBtnClicked\0"
    "slot_copy\0slot_paste\0slot_linkActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DndNumpad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    1,   60,    2, 0x09 /* Protected */,
       5,    0,   63,    2, 0x09 /* Protected */,
       6,    0,   64,    2, 0x09 /* Protected */,
       7,    0,   65,    2, 0x09 /* Protected */,
       8,    0,   66,    2, 0x09 /* Protected */,
       9,    0,   67,    2, 0x09 /* Protected */,
      10,    0,   68,    2, 0x09 /* Protected */,
      11,    1,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void DndNumpad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DndNumpad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_btnInserted(); break;
        case 1: _t->slot_btnRemoved((*reinterpret_cast< BtnShape(*)>(_a[1]))); break;
        case 2: _t->slot_toSqrBtn(); break;
        case 3: _t->slot_toBigVerBtn(); break;
        case 4: _t->slot_toBigHorBtn(); break;
        case 5: _t->slot_applyBtnClicked(); break;
        case 6: _t->slot_copy(); break;
        case 7: _t->slot_paste(); break;
        case 8: _t->slot_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DndNumpad::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DndNumpad.data,
    qt_meta_data_DndNumpad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DndNumpad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DndNumpad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DndNumpad.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DndNumpad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
