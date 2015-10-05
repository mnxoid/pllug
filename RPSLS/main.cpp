#include "homescreen.h"
#include <QApplication>
#include <string.h>
#include "cli.h"

int main(int argc, char *argv[])
{
    if(argc>1 && !strcasecmp(argv[1],"/EZ"))
    {
        (new CLI())->play();
        return 0;
    }
    QApplication a(argc, argv);
    HomeScreen w;
    w.show();

    return a.exec();
}
