/****************************************************************************
** Meta object code from reading C++ file 'webserverqt.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "StdAfx.h"
#include "../../webserverqt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webserverqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebServerQt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      29,   12,   12,   12, 0x0a,
      51,   12,   12,   12, 0x0a,
      73,   12,   12,   12, 0x0a,
     107,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebServerQt[] = {
    "WebServerQt\0\0slot_closetUI()\0"
    "slot_startWebServer()\0slot_colseWebServer()\0"
    "slot_threadReturnMessage(QString)\0"
    "slot_packmenuAcquire()\0"
};

void WebServerQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebServerQt *_t = static_cast<WebServerQt *>(_o);
        switch (_id) {
        case 0: _t->slot_closetUI(); break;
        case 1: _t->slot_startWebServer(); break;
        case 2: _t->slot_colseWebServer(); break;
        case 3: _t->slot_threadReturnMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slot_packmenuAcquire(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebServerQt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebServerQt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WebServerQt,
      qt_meta_data_WebServerQt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebServerQt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebServerQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebServerQt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebServerQt))
        return static_cast<void*>(const_cast< WebServerQt*>(this));
    return QWidget::qt_metacast(_clname);
}

int WebServerQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
