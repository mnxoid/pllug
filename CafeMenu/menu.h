#ifndef MENU_H
#define MENU_H
#include <QString>
#include <QVector>
#include <QDebug>
#include <iostream>
#include <initializer_list>
class Menu;
#include "menuitem.h"
#include "menunode.h"
#include "menuoutputer.h"

class Menu :
        public MenuNode
{
public:
    Menu(const QString& title);
    void setTitle(const QString& title);
    void addSubmenu(Menu* menu);
    void addMenuItem(MenuItem* menuItem);
    virtual void print(MenuOutputer* mo) const override;
private:
    QVector<Menu*> mSubmenu;
    QVector<MenuNode*> mMenuItems;
};

#endif // MENU_H
