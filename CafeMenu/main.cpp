#include <QCoreApplication>
#include "menu.h"
#include "climenuoutputer.h"
QObject* garbage;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    garbage = new QObject;
    Menu *menu = new Menu{"Test menu"};
    Menu* s1 = new Menu{"Sub1"};
    s1->addMenuItem(new MenuItem{"Elem11",4.56,"descr11"});
    s1->addMenuItem(new MenuItem{"Elem12",4.56,"descr12"});
    s1->addMenuItem(new MenuItem{"Elem13",4.56,"descr13"});
    menu->addSubmenu(s1);
    menu->addSubmenu(new Menu{"Sub2"});
    menu->addSubmenu(new Menu{"Sub2"});
    menu->addMenuItem(new MenuItem{"Elem1",4.56,"descr1"});
    menu->addMenuItem(new MenuItem{"Elem2",5.66,"descr2"});
    menu->addMenuItem(new MenuItem{"Elem3",7.46,"descr3"});
    menu->addMenuItem(new MenuItem{"Elem4",8.86,"descr4"});
    menu->print(new CLIMenuOutputer(25));
    delete garbage;
    return 0;//a.exec();
}
