/****************************************************************************
** Meta object code from reading C++ file 'chartwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../chartwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11ChartWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11ChartWidgetE = QtMocHelpers::stringData(
    "ChartWidget",
    "add_series",
    "",
    "series_name",
    "y",
    "ChartPosition",
    "position",
    "reset",
    "update_chart",
    "get_series_list",
    "std::vector<QLineSeries*>",
    "get_position"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11ChartWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   44,    2, 0x0a,    1 /* Public */,
       7,    0,   51,    2, 0x0a,    5 /* Public */,
       8,    0,   52,    2, 0x0a,    6 /* Public */,
       9,    0,   53,    2, 0x10a,    7 /* Public | MethodIsConst  */,
      11,    0,   54,    2, 0x10a,    8 /* Public | MethodIsConst  */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Float, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 10,
    0x80000000 | 5,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChartWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN11ChartWidgetE.offsetsAndSizes,
    qt_meta_data_ZN11ChartWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11ChartWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChartWidget, std::true_type>,
        // method 'add_series'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<ChartPosition, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_chart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'get_series_list'
        QtPrivate::TypeAndForceComplete<std::vector<QLineSeries*>, std::false_type>,
        // method 'get_position'
        QtPrivate::TypeAndForceComplete<ChartPosition, std::false_type>
    >,
    nullptr
} };

void ChartWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChartWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->add_series((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ChartPosition>>(_a[3]))); break;
        case 1: _t->reset(); break;
        case 2: _t->update_chart(); break;
        case 3: { std::vector<QLineSeries*> _r = _t->get_series_list();
            if (_a[0]) *reinterpret_cast< std::vector<QLineSeries*>*>(_a[0]) = std::move(_r); }  break;
        case 4: { ChartPosition _r = _t->get_position();
            if (_a[0]) *reinterpret_cast< ChartPosition*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *ChartWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChartWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11ChartWidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChartWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
