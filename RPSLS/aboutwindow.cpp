#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include "windowmanager.h"

extern WindowManager WM;

AboutWindow::AboutWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
}

AboutWindow::~AboutWindow()
{
    delete ui;
}

//OK button
void AboutWindow::on_pushButton_clicked()
{
    WM.aw->hide();
    WM.hs->show();
}
