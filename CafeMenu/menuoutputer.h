#ifndef MENUOUTPUTER_H
#define MENUOUTPUTER_H
#include "menu.h"
#include "menuitem.h"

class MenuOutputer :
        public QObject
{
public:
    virtual void OutputMenu(const Menu* m) = 0;
    virtual void OutputMenuItem(const MenuItem* mi) = 0;
    virtual void enter() = 0;
    virtual void exit() = 0;
protected:
    MenuOutputer();
};

#endif // MENUOUTPUTER_H
