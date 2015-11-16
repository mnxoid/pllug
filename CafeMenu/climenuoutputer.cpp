#include "climenuoutputer.h"
#include <iostream>
using namespace std;

CLIMenuOutputer::CLIMenuOutputer():
    mDepth(0)
{
}

CLIMenuOutputer::CLIMenuOutputer(int size):
    mSize(size),
    mDepth(0)
{
}

void CLIMenuOutputer::OutputMenu(const Menu *m)
{
    tabs();
    cout << m->title().toStdString() << endl;
}

void CLIMenuOutputer::OutputMenuItem(const MenuItem *mi)
{
    tabs();
    cout << mi->title().toStdString();
    int n = mSize-mi->title().length()-to_string(mi->getPrice()).length()-2*mDepth;
    if(n>2)
    {
        for(int i=0;i<n;i++)cout << ".";
    } else {
        cout << "..";
    }
    cout << mi->getPrice() << endl;
    tabs();
    cout << mi->getDescription().toStdString() << endl;
}

void CLIMenuOutputer::enter()
{
    mDepth++;
}

void CLIMenuOutputer::exit()
{
    mDepth--;
    if(mDepth<0) throw std::runtime_error("Thou shall not have any negative thoughts!");
}

void CLIMenuOutputer::tabs() const
{
    for(int i=0; i<mDepth;i++)cout << "  ";
}
