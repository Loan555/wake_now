#ifndef WAKE_H
#define WAKE_H
#include <QObject>

class Wake : public QObject
{
    Q_OBJECT
public:
    //wake();
    explicit Wake (QObject* parent = 0) : QObject(parent) {}
        Q_INVOKABLE int reken_tijden_uit(){
        return 1;

    }
//    Q_INVOKABLE QString test();
    Q_INVOKABLE QString wake_now(QString macadd);
};

#endif // WAKE_H
