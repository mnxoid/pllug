#ifndef MENUNODE_H
#define MENUNODE_H
#include <QString>
#include <QObject>
class MenuOutputer;
//#include "menuoutputer.h"

class MenuNode :
        public QObject
{
public:
    MenuNode(QString title);
    QString title() const;
    virtual void print(MenuOutputer* mo) const = 0;
private:
    QString mTitle;
};

#endif // MENUNODE_H
