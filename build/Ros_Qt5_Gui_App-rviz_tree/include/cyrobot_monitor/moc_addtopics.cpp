/****************************************************************************
** Meta object code from reading C++ file 'addtopics.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/Ros_Qt5_Gui_App-rviz_tree/include/cyrobot_monitor/addtopics.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtopics.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddTopics_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTopics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTopics_t qt_meta_stringdata_AddTopics = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AddTopics"
QT_MOC_LITERAL(1, 10, 12), // "Topic_choose"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 41, 6), // "choose"
QT_MOC_LITERAL(5, 48, 4), // "name"
QT_MOC_LITERAL(6, 53, 28), // "on_pushButton_cancel_clicked"
QT_MOC_LITERAL(7, 82, 24), // "on_pushButton_ok_clicked"
QT_MOC_LITERAL(8, 107, 21), // "slot_curritem_changed"
QT_MOC_LITERAL(9, 129, 7), // "current"
QT_MOC_LITERAL(10, 137, 8) // "previous"

    },
    "AddTopics\0Topic_choose\0\0QTreeWidgetItem*\0"
    "choose\0name\0on_pushButton_cancel_clicked\0"
    "on_pushButton_ok_clicked\0slot_curritem_changed\0"
    "current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTopics[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    9,   10,

       0        // eod
};

void AddTopics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddTopics *_t = static_cast<AddTopics *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Topic_choose((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_pushButton_cancel_clicked(); break;
        case 2: _t->on_pushButton_ok_clicked(); break;
        case 3: _t->slot_curritem_changed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AddTopics::*_t)(QTreeWidgetItem * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddTopics::Topic_choose)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddTopics::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddTopics.data,
      qt_meta_data_AddTopics,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddTopics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTopics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddTopics.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddTopics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AddTopics::Topic_choose(QTreeWidgetItem * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
