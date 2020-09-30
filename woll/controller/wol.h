#ifndef WOL_H
#define WOL_H

#include <QObject>

class wol
{
    Q_OBJECT
public:
    wol();
    void wakeOnLan(QString MAC);
};

#endif // WOL_H
