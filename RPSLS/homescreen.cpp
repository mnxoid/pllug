#include "homescreen.h"
#include "ui_homescreen.h"
#include "windowmanager.h"
#include <QRect>
#include <QDesktopWidget>

extern WindowManager WM;

HomeScreen::HomeScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());
    setFixedSize(size());
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
