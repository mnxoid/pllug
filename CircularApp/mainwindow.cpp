#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "circularlayout.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //!< TODO: Fix memory leaks!!!
    CircularLayout* cL = new CircularLayout(ui);
    QWidget* myLabel = new QLabel("Hello, world!", this);
    QWidget* mainWgt = new QWidget();
    cL->addWidget(myLabel);
//    cL->addWidget(myLabel);
//    cL->addWidget(myLabel);

    mainWgt->setLayout(cL);
    setCentralWidget(mainWgt);
//    window()->setLayout(cL);
}

MainWindow::~MainWindow()
{
    delete ui;
}
