/****************************************************************************
** Meta object code from reading C++ file 'contest.h'
**
** Created: Mon Jul 2 16:59:55 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pegah/contest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_contest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      18,    8,    8,    8, 0x08,
      43,   37,    8,    8, 0x08,
      82,    8,    8,    8, 0x08,
     102,    8,    8,    8, 0x08,
     132,  124,    8,    8, 0x08,
     160,  124,    8,    8, 0x08,
     188,  124,    8,    8, 0x08,
     216,  124,    8,    8, 0x08,
     244,    8,    8,    8, 0x08,
     265,    8,    8,    8, 0x08,
     286,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_contest[] = {
    "contest\0\0reject()\0on_timer_timeout()\0"
    "index\0on_cmbContest_currentIndexChanged(int)\0"
    "on_lbTime_clicked()\0on_btnStart_clicked()\0"
    "checked\0on_radChoice1_toggled(bool)\0"
    "on_radChoice2_toggled(bool)\0"
    "on_radChoice3_toggled(bool)\0"
    "on_radChoice4_toggled(bool)\0"
    "on_btnNext_clicked()\0on_btnView_clicked()\0"
    "on_btnExit_clicked()\0"
};

void contest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        contest *_t = static_cast<contest *>(_o);
        switch (_id) {
        case 0: _t->reject(); break;
        case 1: _t->on_timer_timeout(); break;
        case 2: _t->on_cmbContest_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_lbTime_clicked(); break;
        case 4: _t->on_btnStart_clicked(); break;
        case 5: _t->on_radChoice1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_radChoice2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radChoice3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_radChoice4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_btnNext_clicked(); break;
        case 10: _t->on_btnView_clicked(); break;
        case 11: _t->on_btnExit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData contest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject contest::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_contest,
      qt_meta_data_contest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &contest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *contest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *contest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_contest))
        return static_cast<void*>(const_cast< contest*>(this));
    return QDialog::qt_metacast(_clname);
}

int contest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
