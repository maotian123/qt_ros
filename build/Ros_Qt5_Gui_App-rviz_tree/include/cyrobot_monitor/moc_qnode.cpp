/****************************************************************************
** Meta object code from reading C++ file 'qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/Ros_Qt5_Gui_App-rviz_tree/include/cyrobot_monitor/qnode.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cyrobot_monitor__QNode_t {
    QByteArrayData data[16];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cyrobot_monitor__QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cyrobot_monitor__QNode_t qt_meta_stringdata_cyrobot_monitor__QNode = {
    {
QT_MOC_LITERAL(0, 0, 22), // "cyrobot_monitor::QNode"
QT_MOC_LITERAL(1, 23, 14), // "loggingUpdated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "rosShutdown"
QT_MOC_LITERAL(4, 51, 7), // "speed_x"
QT_MOC_LITERAL(5, 59, 1), // "x"
QT_MOC_LITERAL(6, 61, 7), // "speed_y"
QT_MOC_LITERAL(7, 69, 1), // "y"
QT_MOC_LITERAL(8, 71, 5), // "power"
QT_MOC_LITERAL(9, 77, 1), // "p"
QT_MOC_LITERAL(10, 79, 15), // "Master_shutdown"
QT_MOC_LITERAL(11, 95, 10), // "Show_image"
QT_MOC_LITERAL(12, 106, 8), // "position"
QT_MOC_LITERAL(13, 115, 5), // "frame"
QT_MOC_LITERAL(14, 121, 1), // "z"
QT_MOC_LITERAL(15, 123, 1) // "w"

    },
    "cyrobot_monitor::QNode\0loggingUpdated\0"
    "\0rosShutdown\0speed_x\0x\0speed_y\0y\0power\0"
    "p\0Master_shutdown\0Show_image\0position\0"
    "frame\0z\0w"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cyrobot_monitor__QNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    1,   62,    2, 0x06 /* Public */,
      10,    0,   65,    2, 0x06 /* Public */,
      11,    2,   66,    2, 0x06 /* Public */,
      12,    5,   71,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   13,    5,    7,   14,   15,

       0        // eod
};

void cyrobot_monitor::QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNode *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingUpdated(); break;
        case 1: _t->rosShutdown(); break;
        case 2: _t->speed_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->speed_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->Master_shutdown(); break;
        case 6: _t->Show_image((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->position((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::loggingUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::rosShutdown)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_x)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_y)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::power)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Master_shutdown)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(int , QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Show_image)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QString , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::position)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject cyrobot_monitor::QNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_cyrobot_monitor__QNode.data,
      qt_meta_data_cyrobot_monitor__QNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cyrobot_monitor::QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cyrobot_monitor::QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cyrobot_monitor__QNode.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int cyrobot_monitor::QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void cyrobot_monitor::QNode::loggingUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cyrobot_monitor::QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cyrobot_monitor::QNode::speed_x(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void cyrobot_monitor::QNode::speed_y(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void cyrobot_monitor::QNode::power(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void cyrobot_monitor::QNode::Master_shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void cyrobot_monitor::QNode::Show_image(int _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void cyrobot_monitor::QNode::position(QString _t1, double _t2, double _t3, double _t4, double _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
