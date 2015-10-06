#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include "windowmanager.h"
#include <QRect>
#include <QDesktopWidget>

extern WindowManager WM;

AboutWindow::AboutWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    QRect position = frameGeometry();
    position.moveCenter(QDesktopWidget().availableGeometry().center());
    move(position.topLeft());
    setFixedSize(size());
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
