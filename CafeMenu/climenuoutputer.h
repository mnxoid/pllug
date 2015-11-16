#ifndef CLIMENUOUTPUTER_H
#define CLIMENUOUTPUTER_H
#include "menuoutputer.h"


class CLIMenuOutputer : public MenuOutputer
{
public:
    CLIMenuOutputer();
    CLIMenuOutputer(int size);
    virtual void OutputMenu(const Menu* m) override;
    virtual void OutputMenuItem(const MenuItem* mi) override;
    virtual void enter() override;
    virtual void exit() override;
private:
    int mDepth;
    int mSize;
    void tabs() const;
};

#endif // CLIMENUOUTPUTER_H
