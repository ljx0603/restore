/****************************************************************************
** Meta object code from reading C++ file 'SettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../SettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsDialog_t {
    QByteArrayData data[18];
    char stringdata0[442];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsDialog_t qt_meta_stringdata_SettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsDialog"
QT_MOC_LITERAL(1, 15, 23), // "slot_buttonsSizeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "slot_spacingChanged"
QT_MOC_LITERAL(4, 60, 31), // "slot_btnNotPressColorBtnClicked"
QT_MOC_LITERAL(5, 92, 28), // "slot_btnPressColorBtnClicked"
QT_MOC_LITERAL(6, 121, 30), // "slot_backgroundColorBtnClicked"
QT_MOC_LITERAL(7, 152, 24), // "slot_textColorBtnClicked"
QT_MOC_LITERAL(8, 177, 19), // "slot_fontBtnClicked"
QT_MOC_LITERAL(9, 197, 29), // "slot_keyComboBoxItemActivated"
QT_MOC_LITERAL(10, 227, 31), // "slot_altCodeLblModeStateChanged"
QT_MOC_LITERAL(11, 259, 24), // "slot_autoRunStateChanged"
QT_MOC_LITERAL(12, 284, 30), // "slot_buttonsSizeSliderReleased"
QT_MOC_LITERAL(13, 315, 26), // "slot_spacingSliderReleased"
QT_MOC_LITERAL(14, 342, 19), // "slot_confBtnClicked"
QT_MOC_LITERAL(15, 362, 25), // "slot_showGearStateChanged"
QT_MOC_LITERAL(16, 388, 24), // "slot_openConfFileClicked"
QT_MOC_LITERAL(17, 413, 28) // "slot_loadOtherConfBtnClicked"

    },
    "SettingsDialog\0slot_buttonsSizeChanged\0"
    "\0slot_spacingChanged\0"
    "slot_btnNotPressColorBtnClicked\0"
    "slot_btnPressColorBtnClicked\0"
    "slot_backgroundColorBtnClicked\0"
    "slot_textColorBtnClicked\0slot_fontBtnClicked\0"
    "slot_keyComboBoxItemActivated\0"
    "slot_altCodeLblModeStateChanged\0"
    "slot_autoRunStateChanged\0"
    "slot_buttonsSizeSliderReleased\0"
    "slot_spacingSliderReleased\0"
    "slot_confBtnClicked\0slot_showGearStateChanged\0"
    "slot_openConfFileClicked\0"
    "slot_loadOtherConfBtnClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x09 /* Protected */,
       3,    1,   97,    2, 0x09 /* Protected */,
       4,    0,  100,    2, 0x09 /* Protected */,
       5,    0,  101,    2, 0x09 /* Protected */,
       6,    0,  102,    2, 0x09 /* Protected */,
       7,    0,  103,    2, 0x09 /* Protected */,
       8,    0,  104,    2, 0x09 /* Protected */,
       9,    1,  105,    2, 0x09 /* Protected */,
      10,    1,  108,    2, 0x09 /* Protected */,
      11,    1,  111,    2, 0x09 /* Protected */,
      12,    0,  114,    2, 0x09 /* Protected */,
      13,    0,  115,    2, 0x09 /* Protected */,
      14,    0,  116,    2, 0x09 /* Protected */,
      15,    1,  117,    2, 0x09 /* Protected */,
      16,    0,  120,    2, 0x09 /* Protected */,
      17,    0,  121,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_buttonsSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_spacingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_btnNotPressColorBtnClicked(); break;
        case 3: _t->slot_btnPressColorBtnClicked(); break;
        case 4: _t->slot_backgroundColorBtnClicked(); break;
        case 5: _t->slot_textColorBtnClicked(); break;
        case 6: _t->slot_fontBtnClicked(); break;
        case 7: _t->slot_keyComboBoxItemActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slot_altCodeLblModeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slot_autoRunStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slot_buttonsSizeSliderReleased(); break;
        case 11: _t->slot_spacingSliderReleased(); break;
        case 12: _t->slot_confBtnClicked(); break;
        case 13: _t->slot_showGearStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slot_openConfFileClicked(); break;
        case 15: _t->slot_loadOtherConfBtnClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsDialog.data,
    qt_meta_data_SettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
