/****************************************************************************
** Meta object code from reading C++ file 'designer.h'
**
** Created: Wed Sep 13 09:39:55 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pegah/designer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'designer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_designer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      58,    9,    9,    9, 0x08,
      78,    9,    9,    9, 0x08,
     101,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_designer[] = {
    "designer\0\0on_btnExit_clicked()\0"
    "on_btnCreateUser_clicked()\0"
    "on_btnNew_clicked()\0on_btnDelete_clicked()\0"
    "on_btnEdit_clicked()\0"
};

const QMetaObject designer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_designer,
      qt_meta_data_designer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &designer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *designer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *designer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_designer))
        return static_cast<void*>(const_cast< designer*>(this));
    return QDialog::qt_metacast(_clname);
}

int designer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnExit_clicked(); break;
        case 1: on_btnCreateUser_clicked(); break;
        case 2: on_btnNew_clicked(); break;
        case 3: on_btnDelete_clicked(); break;
        case 4: on_btnEdit_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
