/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/Ros_Qt5_Gui_App-rviz_tree/include/cyrobot_monitor/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cyrobot_monitor__MainWindow_t {
    QByteArrayData data[44];
    char stringdata0[891];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cyrobot_monitor__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cyrobot_monitor__MainWindow_t qt_meta_stringdata_cyrobot_monitor__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "cyrobot_monitor::MainWindow"
QT_MOC_LITERAL(1, 28, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 40), // "on_checkbox_use_environment_s..."
QT_MOC_LITERAL(4, 95, 5), // "state"
QT_MOC_LITERAL(5, 101, 10), // "slot_power"
QT_MOC_LITERAL(6, 112, 1), // "p"
QT_MOC_LITERAL(7, 114, 16), // "slot_rosShutdown"
QT_MOC_LITERAL(8, 131, 23), // "quick_cmds_check_change"
QT_MOC_LITERAL(9, 155, 10), // "cmd_output"
QT_MOC_LITERAL(10, 166, 16), // "cmd_error_output"
QT_MOC_LITERAL(11, 183, 17), // "refreashTopicList"
QT_MOC_LITERAL(12, 201, 12), // "RvizGetModel"
QT_MOC_LITERAL(13, 214, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(14, 234, 5), // "model"
QT_MOC_LITERAL(15, 240, 26), // "on_Slider_raw_valueChanged"
QT_MOC_LITERAL(16, 267, 5), // "value"
QT_MOC_LITERAL(17, 273, 29), // "on_Slider_linear_valueChanged"
QT_MOC_LITERAL(18, 303, 16), // "slot_cmd_control"
QT_MOC_LITERAL(19, 320, 30), // "slot_tab_manage_currentChanged"
QT_MOC_LITERAL(20, 351, 30), // "slot_tab_Widget_currentChanged"
QT_MOC_LITERAL(21, 382, 17), // "slot_choose_topic"
QT_MOC_LITERAL(22, 400, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(23, 417, 6), // "choose"
QT_MOC_LITERAL(24, 424, 4), // "name"
QT_MOC_LITERAL(25, 429, 16), // "slot_set_2D_Goal"
QT_MOC_LITERAL(26, 446, 15), // "slot_set_2D_Pos"
QT_MOC_LITERAL(27, 462, 15), // "slot_set_select"
QT_MOC_LITERAL(28, 478, 20), // "slot_move_camera_btn"
QT_MOC_LITERAL(29, 499, 18), // "slot_setting_frame"
QT_MOC_LITERAL(30, 518, 21), // "slot_set_return_point"
QT_MOC_LITERAL(31, 540, 17), // "slot_return_point"
QT_MOC_LITERAL(32, 558, 20), // "slot_position_change"
QT_MOC_LITERAL(33, 579, 13), // "quick_cmd_add"
QT_MOC_LITERAL(34, 593, 16), // "quick_cmd_remove"
QT_MOC_LITERAL(35, 610, 31), // "on_pushButton_add_topic_clicked"
QT_MOC_LITERAL(36, 642, 34), // "on_pushButton_remove_topic_cl..."
QT_MOC_LITERAL(37, 677, 34), // "on_pushButton_rename_topic_cl..."
QT_MOC_LITERAL(38, 712, 35), // "on_treeView_rvizDisplayTree_c..."
QT_MOC_LITERAL(39, 748, 5), // "index"
QT_MOC_LITERAL(40, 754, 28), // "on_button_disconnect_clicked"
QT_MOC_LITERAL(41, 783, 40), // "on_pushButton_rvizReadDisplay..."
QT_MOC_LITERAL(42, 824, 40), // "on_pushButton_rvizSaveDisplay..."
QT_MOC_LITERAL(43, 865, 25) // "on_button_connect_clicked"

    },
    "cyrobot_monitor::MainWindow\0"
    "on_actionAbout_triggered\0\0"
    "on_checkbox_use_environment_stateChanged\0"
    "state\0slot_power\0p\0slot_rosShutdown\0"
    "quick_cmds_check_change\0cmd_output\0"
    "cmd_error_output\0refreashTopicList\0"
    "RvizGetModel\0QAbstractItemModel*\0model\0"
    "on_Slider_raw_valueChanged\0value\0"
    "on_Slider_linear_valueChanged\0"
    "slot_cmd_control\0slot_tab_manage_currentChanged\0"
    "slot_tab_Widget_currentChanged\0"
    "slot_choose_topic\0QTreeWidgetItem*\0"
    "choose\0name\0slot_set_2D_Goal\0"
    "slot_set_2D_Pos\0slot_set_select\0"
    "slot_move_camera_btn\0slot_setting_frame\0"
    "slot_set_return_point\0slot_return_point\0"
    "slot_position_change\0quick_cmd_add\0"
    "quick_cmd_remove\0on_pushButton_add_topic_clicked\0"
    "on_pushButton_remove_topic_clicked\0"
    "on_pushButton_rename_topic_clicked\0"
    "on_treeView_rvizDisplayTree_clicked\0"
    "index\0on_button_disconnect_clicked\0"
    "on_pushButton_rvizReadDisplaySet_clicked\0"
    "on_pushButton_rvizSaveDisplaySet_clicked\0"
    "on_button_connect_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cyrobot_monitor__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  179,    2, 0x0a /* Public */,
       3,    1,  180,    2, 0x0a /* Public */,
       5,    1,  183,    2, 0x0a /* Public */,
       7,    0,  186,    2, 0x0a /* Public */,
       8,    1,  187,    2, 0x0a /* Public */,
       9,    0,  190,    2, 0x0a /* Public */,
      10,    0,  191,    2, 0x0a /* Public */,
      11,    0,  192,    2, 0x0a /* Public */,
      12,    1,  193,    2, 0x0a /* Public */,
      15,    1,  196,    2, 0x0a /* Public */,
      17,    1,  199,    2, 0x0a /* Public */,
      18,    0,  202,    2, 0x0a /* Public */,
      19,    1,  203,    2, 0x0a /* Public */,
      20,    1,  206,    2, 0x0a /* Public */,
      21,    2,  209,    2, 0x0a /* Public */,
      25,    0,  214,    2, 0x0a /* Public */,
      26,    0,  215,    2, 0x0a /* Public */,
      27,    0,  216,    2, 0x0a /* Public */,
      28,    0,  217,    2, 0x0a /* Public */,
      29,    0,  218,    2, 0x0a /* Public */,
      30,    0,  219,    2, 0x0a /* Public */,
      31,    0,  220,    2, 0x0a /* Public */,
      32,    5,  221,    2, 0x0a /* Public */,
      33,    0,  232,    2, 0x0a /* Public */,
      34,    0,  233,    2, 0x0a /* Public */,
      35,    0,  234,    2, 0x08 /* Private */,
      36,    0,  235,    2, 0x08 /* Private */,
      37,    0,  236,    2, 0x08 /* Private */,
      38,    1,  237,    2, 0x08 /* Private */,
      40,    0,  240,    2, 0x08 /* Private */,
      41,    0,  241,    2, 0x08 /* Private */,
      42,    0,  242,    2, 0x08 /* Private */,
      43,    0,  243,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cyrobot_monitor::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_power((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->slot_rosShutdown(); break;
        case 4: _t->quick_cmds_check_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cmd_output(); break;
        case 6: _t->cmd_error_output(); break;
        case 7: _t->refreashTopicList(); break;
        case 8: _t->RvizGetModel((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 9: _t->on_Slider_raw_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_Slider_linear_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slot_cmd_control(); break;
        case 12: _t->slot_tab_manage_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->slot_tab_Widget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slot_choose_topic((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->slot_set_2D_Goal(); break;
        case 16: _t->slot_set_2D_Pos(); break;
        case 17: _t->slot_set_select(); break;
        case 18: _t->slot_move_camera_btn(); break;
        case 19: _t->slot_setting_frame(); break;
        case 20: _t->slot_set_return_point(); break;
        case 21: _t->slot_return_point(); break;
        case 22: _t->slot_position_change((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 23: _t->quick_cmd_add(); break;
        case 24: _t->quick_cmd_remove(); break;
        case 25: _t->on_pushButton_add_topic_clicked(); break;
        case 26: _t->on_pushButton_remove_topic_clicked(); break;
        case 27: _t->on_pushButton_rename_topic_clicked(); break;
        case 28: _t->on_treeView_rvizDisplayTree_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 29: _t->on_button_disconnect_clicked(); break;
        case 30: _t->on_pushButton_rvizReadDisplaySet_clicked(); break;
        case 31: _t->on_pushButton_rvizSaveDisplaySet_clicked(); break;
        case 32: _t->on_button_connect_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject cyrobot_monitor::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cyrobot_monitor__MainWindow.data,
      qt_meta_data_cyrobot_monitor__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cyrobot_monitor::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cyrobot_monitor::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cyrobot_monitor__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cyrobot_monitor::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
