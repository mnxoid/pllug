#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <QMainWindow>
#include "rpsls_core.h"

namespace Ui {
class GameScreen;
}

class GameScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameScreen(QWidget *parent = 0);
    ~GameScreen();

private:
    Ui::GameScreen *ui;
    int states[5];
    QPixmap pixmaps[5][3];
    void colorify();
    void stateChange(int i, int newstate);
    RPSLS_Core core;

protected:
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
};

#endif // GAMESCREEN_H
