#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H
#include "homescreen.h"
#include "aboutwindow.h"
#include "gamescreen.h"

class WindowManager
{
public:
    WindowManager();
    HomeScreen* hs;
    AboutWindow* aw;
    GameScreen* gs;
};

#endif // WINDOWMANAGER_H
