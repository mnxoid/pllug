#include "gamescreen.h"
#include "ui_gamescreen.h"
#include <QToolTip>
#include <QMouseEvent>
#include <string>
#include <math.h>
#include <thread>
#include <chrono>
#include <QMessageBox>
#include "windowmanager.h"

extern WindowManager WM;

using namespace std;

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen),
    core()
{
    for(int i=0;i<5;i++)states[i]=0;
    string names[]={
        "Rock",
        "Paper",
        "Scissors",
        "Lizard",
        "Spock"
    };
    for(int i=0;i<5;i++)
    {
        pixmaps[i][0]=QPixmap(QString::fromStdString(":/Blue/resources/Blue/"+names[i]+"_b.png"));
        pixmaps[i][1]=QPixmap(QString::fromStdString(":/Green/resources/Green/"+names[i]+"_g.png"));
        pixmaps[i][2]=QPixmap(QString::fromStdString(":/Red/resources/Red/"+names[i]+"_r.png"));
    }
    pixmaps[5][0]=QPixmap(QString::fromStdString(":/resources/RPSLS.png"));
    pixmaps[5][1]=QPixmap(QString::fromStdString(":/resources/RPSLS1.png"));
    this->setMouseTracking(true);
    ui->setupUi(this);
//    ui->rock->setMouseTracking(true);
//    ui->paper->setMouseTracking(true);
//    ui->scissors->setMouseTracking(true);
//    ui->lizard->setMouseTracking(true);
    ui->spock->setMouseTracking(true);
    GameScreen::centralWidget()->setMouseTracking(true);
}

GameScreen::~GameScreen()
{
    delete ui;
}

void GameScreen::mouseMoveEvent(QMouseEvent *e)
{
    double x=e->x();
    double y=e->y();
    if(x>=12&&x<=112&&y>=15&&y<=55)
    {
        ui->bg->setPixmap(pixmaps[5][1]);
    } else {
        ui->bg->setPixmap(pixmaps[5][0]);
        double R_d, P_d, Sc_d, L_d, Sp_d;
        R_d = sqrt((x-210)*(x-210)+(y-70)*(y-70))-66;
        P_d = sqrt((x-348)*(x-348)+(y-170)*(y-170))-66;
        Sc_d = sqrt((x-300)*(x-300)+(y-325)*(y-325))-66;
        L_d = sqrt((x-125)*(x-125)+(y-325)*(y-325))-66;
        Sp_d = sqrt((x-74)*(x-74)+(y-170)*(y-170))-66;
        if(R_d<0)
        {
    //        QToolTip::showText(e->pos(),QString::fromStdString("Rock"));
            stateChange(0,1);
        } else if (P_d<0) {
    //        QToolTip::showText(e->pos(),QString::fromStdString("Paper"));
            stateChange(1,1);
        } else if (Sc_d<0) {
    //        QToolTip::showText(e->pos(),QString::fromStdString("Scissors"));
            stateChange(2,1);
        } else if (L_d<0) {
    //        QToolTip::showText(e->pos(),QString::fromStdString("Lizard"));
            stateChange(3,1);
        } else if (Sp_d<0) {
    //        QToolTip::showText(e->pos(),QString::fromStdString("Spock"));
            stateChange(4,1);
        } else {
            for(int i=0;i<5;i++)stateChange(i,0);
    //        QString text = QString::fromStdString(string("")+to_string(e->x())+";"+to_string(e->y()));
    //        QToolTip::showText(e->pos(),text);
        }
        colorify();
    }
}

void GameScreen::colorify()
{
    QLabel* elems[]={
        ui->rock,
        ui->paper,
        ui->scissors,
        ui->lizard,
        ui->spock,
    };
    string names[]={
        "Rock",
        "Paper",
        "Scissors",
        "Lizard",
        "Spock"
    };
    for(int i=0;i<5;i++)
    {
        if(states[i]==0)
        {
            elems[i]->setPixmap(pixmaps[i][0]);
        } else if (states[i]==1) {
            elems[i]->setPixmap(pixmaps[i][1]);
        } else if (states[i]==2) {
            elems[i]->setPixmap(pixmaps[i][2]);
        } else if (states[i]==3) {
            elems[i]->setPixmap(pixmaps[i][1]);
        }
    }
}

void GameScreen::stateChange(int i, int newstate)
{
    if(newstate==3)
    {
        int x=0;
        for(int j=1;j<5;j++)
        {
            if(states[j]==3) x++;
        }
        if(x==0)
        {
            states[i]=newstate;
        }
    } else if(states[i]>1) {
        if(newstate>1)
        {
            states[i]=newstate;
        }
    } else {
        states[i]=newstate;
    }
}

void GameScreen::mouseReleaseEvent(QMouseEvent *e)
{
    double x=e->x();
    double y=e->y();
    if(x>=12&&x<=112&&y>=15&&y<=55)
    {
        WM.gs->hide();
        WM.hs->show();
    } else {
        double R_d, P_d, Sc_d, L_d, Sp_d;
        R_d = sqrt((x-210)*(x-210)+(y-70)*(y-70))-66;
        P_d = sqrt((x-348)*(x-348)+(y-170)*(y-170))-66;
        Sc_d = sqrt((x-300)*(x-300)+(y-325)*(y-325))-66;
        L_d = sqrt((x-125)*(x-125)+(y-325)*(y-325))-66;
        Sp_d = sqrt((x-74)*(x-74)+(y-170)*(y-170))-66;
        int choice=-1;
        if(R_d<0)
        {
            choice=0;
        } else if (P_d<0) {
            choice=1;
        } else if (Sc_d<0) {
            choice=2;
        } else if (L_d<0) {
            choice=3;
        } else if (Sp_d<0) {
            choice=4;
        }
        if(choice>=0)
        {
            stateChange(choice,3);
            colorify();
            GameResult res = core.play(choice,10);
            for(int i=0;i<res.choices.size()-1;i++)
            {
                int last = states[res.choices[i]];
                states[res.choices[i]] = 2;
                colorify();
                repaint();
                std::this_thread::sleep_for( std::chrono::milliseconds(100));
                states[res.choices[i]] = last;
            }
            states[res.choices[res.choices.size()-1]] = 2;
            colorify();
            QString title,text;
            if(res.result==0){
                title=QString::fromStdString("Draw!");
            } else if(res.result==1) {
                title=QString::fromStdString("You won!");
            } else {
                title=QString::fromStdString("You lost!");
            }
            text = QString::fromStdString(core.message(choice,res.choices[res.choices.size()-1]));
            QMessageBox::information(NULL, title, text);
            for(int i=0;i<5;i++)states[i]=0;
        }
    }
}
