#ifndef MENUITEM_H
#define MENUITEM_H
#include <QString>
#include <QDebug>
#include "menunode.h"

class MenuItem :
        public MenuNode
{
public:
//    MenuItem();
    MenuItem(const QString& title, double price, const QString& desc);
//    void setTitle(const QString& title);
    virtual void print(MenuOutputer* mo) const override;

    QString getDescription() const;
    double getPrice() const;

private:
    //    QString mTitle;
    QString mDescription;
    double mPrice;
};

#endif // MENUITEM_H
