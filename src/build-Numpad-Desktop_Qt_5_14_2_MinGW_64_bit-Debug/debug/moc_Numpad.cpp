/****************************************************************************
** Meta object code from reading C++ file 'Numpad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Numpad/Numpad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Numpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Numpad_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Numpad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Numpad_t qt_meta_stringdata_Numpad = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Numpad"
QT_MOC_LITERAL(1, 7, 13), // "menuActivated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 15), // "slot_btnToggled"
QT_MOC_LITERAL(4, 38, 2), // "id"
QT_MOC_LITERAL(5, 41, 7), // "checked"
QT_MOC_LITERAL(6, 49, 26), // "slot_showAltCodeLblTimeout"
QT_MOC_LITERAL(7, 76, 15), // "slot_btnPressed"
QT_MOC_LITERAL(8, 92, 10), // "QList<int>"
QT_MOC_LITERAL(9, 103, 16) // "slot_rstrTimeout"

    },
    "Numpad\0menuActivated\0\0slot_btnToggled\0"
    "id\0checked\0slot_showAltCodeLblTimeout\0"
    "slot_btnPressed\0QList<int>\0slot_rstrTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Numpad[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   40,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,
       7,    1,   46,    2, 0x09 /* Protected */,
       9,    0,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,

       0        // eod
};

void Numpad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Numpad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menuActivated(); break;
        case 1: _t->slot_btnToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->slot_showAltCodeLblTimeout(); break;
        case 3: _t->slot_btnPressed((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 4: _t->slot_rstrTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Numpad::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Numpad::menuActivated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Numpad::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Numpad.data,
    qt_meta_data_Numpad,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Numpad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Numpad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Numpad.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Numpad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Numpad::menuActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
