#include "menu.h"

Menu::Menu(const QString &title):
    MenuNode(title)
{
}

void Menu::addSubmenu(Menu *menu)
{
    mSubmenu.append(menu);
}

void Menu::addMenuItem(MenuItem *menuItem)
{
    mMenuItems.append(menuItem);
}

void Menu::print(MenuOutputer *mo) const
{
    mo->OutputMenu(this);
    mo->enter();
    for (auto i: mSubmenu)
    {
        i->print(mo);
    }
    for (auto i: mMenuItems)
    {
        i->print(mo);
    }
    mo->exit();
//    mo->exit();//Uncomment me to see the error :)
}

//void Menu::print() const
//{
//    qDebug() << "---------------------------------";// << std::endl;
//    qDebug() << title() << ":";// << std::endl;
//    for(auto sub : mSubmenu) sub->print();
//    for(auto item : mMenuItems) item->print();
//    qDebug() << "---------------------------------";// << std::endl;
////    return os;
//}
