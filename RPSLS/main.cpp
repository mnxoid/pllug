#include "windowmanager.h"
#include <QApplication>
#include <string.h>
#include "cli.h"

WindowManager WM;

int main(int argc, char *argv[])
{
    if(argc>1 && !strcasecmp(argv[1],"/EZ"))
    {
        (new CLI())->play();
        return 0;
    }
    QApplication a(argc, argv);
    HomeScreen hs;
    AboutWindow aw;
    GameScreen gs;
    WM.hs=&hs;
    WM.aw=&aw;
    WM.gs=&gs;
    hs.show();

    return a.exec();
}
