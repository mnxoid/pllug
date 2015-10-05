#include "homescreen.h"
#include "ui_homescreen.h"
#include "windowmanager.h"

extern WindowManager WM;

HomeScreen::HomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}

//New Game
void HomeScreen::on_pushButton_3_clicked()
{
    WM.hs->hide();
    WM.gs->show();
}

//About
void HomeScreen::on_pushButton_2_clicked()
{
    WM.hs->hide();
    WM.aw->show();
}

//Exit
void HomeScreen::on_pushButton_clicked()
{
    QApplication::quit();
}
