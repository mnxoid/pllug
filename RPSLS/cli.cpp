#include "cli.h"
#include <iostream>
#include "util.h"

using namespace std;

CLI::CLI() : _core()
{
}

void CLI::play()
{
    cout << "Welcome to the cli mode!" << endl;
    while (true) {
        int choice = menu();
        if(choice == 1)
        {
            game_play();
        } else if (choice == 2) {
            cout << "This game wad developed by mnxoid." << endl;
            cout << "Feel free to visit my GitHub page:" << endl;
            cout << "http://github.com/mnxoid" << endl;
        } else return;
    }
}

int CLI::menu()
{
    cout << "\tGame menu:" << endl;
    cout << "1 - New Game" << endl;
    cout << "2 - About" << endl;
    cout << "3 - Exit" << endl;
    return Choice(1,3);
}

void CLI::game_play()
{
    cout << "\tYour options:" << endl;
    cout << "1 - Rock" << endl;
    cout << "2 - Paper" << endl;
    cout << "3 - Scissors" << endl;
    cout << "4 - Lizard" << endl;
    cout << "5 - Spock" << endl;
    int ch = Choice(1,5)-1;
    GameResult res = _core.play(ch,1);
    cout << _core.message(ch,res.choices.at(0)) << endl;
    if(res.result > 0)
    {
        cout << "You win!" << endl;
    } else if(res.result < 0) {
        cout << "You lose!" << endl;
    }
}
