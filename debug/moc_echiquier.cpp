/****************************************************************************
** Meta object code from reading C++ file 'echiquier.h'
**
** Created: Thu 15. Jan 16:17:25 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../echiquier.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'echiquier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_echiquier[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      39,   10,   10,   10, 0x08,
      63,   10,   10,   10, 0x08,
      89,   10,   10,   10, 0x08,
     127,  121,  116,   10, 0x08,
     169,  167,  163,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_echiquier[] = {
    "echiquier\0\0on_menuNvpartie_activated()\0"
    "on_btDeplacer_clicked()\0"
    "on_menuRegles_activated()\0"
    "on_menuApropos_activated()\0bool\0j,p,e\0"
    "en_echec(Joueur&,Piece*,Echiquier&)\0"
    "int\0c\0colEnEntier(QString)\0"
};

const QMetaObject echiquier::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_echiquier,
      qt_meta_data_echiquier, 0 }
};

const QMetaObject *echiquier::metaObject() const
{
    return &staticMetaObject;
}

void *echiquier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_echiquier))
        return static_cast<void*>(const_cast< echiquier*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int echiquier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_menuNvpartie_activated(); break;
        case 1: on_btDeplacer_clicked(); break;
        case 2: on_menuRegles_activated(); break;
        case 3: on_menuApropos_activated(); break;
        case 4: { bool _r = en_echec((*reinterpret_cast< Joueur(*)>(_a[1])),(*reinterpret_cast< Piece*(*)>(_a[2])),(*reinterpret_cast< Echiquier(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = colEnEntier((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
