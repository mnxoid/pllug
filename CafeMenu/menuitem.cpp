#include "menuitem.h"
#include "menuoutputer.h"
MenuItem::MenuItem(const QString &title, double price, const QString &desc):
    MenuNode(title),
    mPrice(price),
    mDescription(desc)
{

}

void MenuItem::print(MenuOutputer *mo) const
{
    mo->OutputMenuItem(this);
}
QString MenuItem::getDescription() const
{
    return mDescription;
}

double MenuItem::getPrice() const
{
    return mPrice;
}



//void MenuItem::print() const
//{
//    qDebug() << title() << "........." << mPrice;
//    qDebug() << mDescription;
//}
