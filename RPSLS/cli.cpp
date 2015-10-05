#include "cli.h"
#include <iostream>

using namespace std;

CLI::CLI() : _core()
{
}

void CLI::play()
{
    cout << "Welcome to the cli mode!" << endl;
    int choice = menu();
}

int CLI::menu()
{
    return 1;
}
