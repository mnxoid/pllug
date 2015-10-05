#ifndef CLI_H
#define CLI_H

#include "rpsls_core.h"

class CLI
{
public:
    CLI();
    void play();
private:
    int menu();
    void game_play();
    RPSLS_Core _core;
};

#endif // CLI_H
