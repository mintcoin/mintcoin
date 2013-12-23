/****************************************************************************
** Meta object code from reading C++ file 'mintcoingui.h'
**
** Created: Sun Dec 22 22:02:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/mintcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mintcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MintcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x0a,
      61,   42,   12,   12, 0x0a,
      99,   83,   12,   12, 0x0a,
     126,  119,   12,   12, 0x0a,
     171,  151,   12,   12, 0x0a,
     219,  199,   12,   12, 0x0a,
     247,  240,   12,   12, 0x0a,
     266,   12,   12,   12, 0x08,
     285,   12,   12,   12, 0x08,
     302,   12,   12,   12, 0x08,
     320,   12,   12,   12, 0x08,
     342,   12,   12,   12, 0x08,
     365,   12,   12,   12, 0x08,
     390,  385,   12,   12, 0x08,
     418,   12,   12,   12, 0x28,
     439,  385,   12,   12, 0x08,
     469,   12,   12,   12, 0x28,
     492,   12,   12,   12, 0x08,
     509,   12,   12,   12, 0x08,
     531,  524,   12,   12, 0x08,
     601,  584,   12,   12, 0x08,
     642,  119,   12,   12, 0x08,
     662,   12,   12,   12, 0x08,
     677,   12,   12,   12, 0x08,
     696,   12,   12,   12, 0x08,
     725,  711,   12,   12, 0x08,
     753,   12,   12,   12, 0x28,
     777,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MintcoinGUI[] = {
    "MintcoinGUI\0\0count\0setNumConnections(int)\0"
    "count,countOfPeers\0setNumBlocks(int,int)\0"
    "mining,hashrate\0setMining(bool,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,modal\0error(QString,QString,bool)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0gotoOverviewPage()\0"
    "gotoMiningPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoReceiveCoinsPage()\0"
    "gotoSendCoinsPage()\0addr\0"
    "gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0optionsClicked()\0"
    "aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0backupWallet()\0"
    "changePassphrase()\0unlockWallet()\0"
    "fToggleHidden\0showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
};

void MintcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MintcoinGUI *_t = static_cast<MintcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setMining((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 6: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->gotoOverviewPage(); break;
        case 8: _t->gotoMiningPage(); break;
        case 9: _t->gotoHistoryPage(); break;
        case 10: _t->gotoAddressBookPage(); break;
        case 11: _t->gotoReceiveCoinsPage(); break;
        case 12: _t->gotoSendCoinsPage(); break;
        case 13: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->gotoSignMessageTab(); break;
        case 15: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->gotoVerifyMessageTab(); break;
        case 17: _t->optionsClicked(); break;
        case 18: _t->aboutClicked(); break;
        case 19: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 20: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->backupWallet(); break;
        case 23: _t->changePassphrase(); break;
        case 24: _t->unlockWallet(); break;
        case 25: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->showNormalIfMinimized(); break;
        case 27: _t->toggleHidden(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MintcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MintcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MintcoinGUI,
      qt_meta_data_MintcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MintcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MintcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MintcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MintcoinGUI))
        return static_cast<void*>(const_cast< MintcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MintcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
