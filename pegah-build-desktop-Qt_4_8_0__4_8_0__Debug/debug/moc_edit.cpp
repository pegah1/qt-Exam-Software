/****************************************************************************
** Meta object code from reading C++ file 'edit.h'
**
** Created: Mon Jul 2 16:59:54 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pegah/edit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_edit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      27,    5,    5,    5, 0x08,
      47,    5,    5,    5, 0x08,
      68,    5,    5,    5, 0x08,
      89,    5,    5,    5, 0x08,
     112,    5,    5,    5, 0x08,
     140,    5,    5,    5, 0x08,
     167,    5,    5,    5, 0x08,
     194,    5,    5,    5, 0x08,
     221,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_edit[] = {
    "edit\0\0on_btnSave_clicked()\0"
    "on_btnNew_clicked()\0on_btnNext_clicked()\0"
    "on_btnPrev_clicked()\0on_btnDelete_clicked()\0"
    "on_btnQuestionPic_clicked()\0"
    "on_btnChoicePic2_clicked()\0"
    "on_btnChoicePic1_clicked()\0"
    "on_btnChoicePic4_clicked()\0"
    "on_btnChoicePic3_clicked()\0"
};

void edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        edit *_t = static_cast<edit *>(_o);
        switch (_id) {
        case 0: _t->on_btnSave_clicked(); break;
        case 1: _t->on_btnNew_clicked(); break;
        case 2: _t->on_btnNext_clicked(); break;
        case 3: _t->on_btnPrev_clicked(); break;
        case 4: _t->on_btnDelete_clicked(); break;
        case 5: _t->on_btnQuestionPic_clicked(); break;
        case 6: _t->on_btnChoicePic2_clicked(); break;
        case 7: _t->on_btnChoicePic1_clicked(); break;
        case 8: _t->on_btnChoicePic4_clicked(); break;
        case 9: _t->on_btnChoicePic3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData edit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject edit::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_edit,
      qt_meta_data_edit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &edit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *edit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_edit))
        return static_cast<void*>(const_cast< edit*>(this));
    return QDialog::qt_metacast(_clname);
}

int edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
