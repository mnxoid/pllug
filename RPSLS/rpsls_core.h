#ifndef RPSLS_CORE_H
#define RPSLS_CORE_H

#include <vector>
#define WON 1
#define LOST 0

using namespace std;

struct GameResult
{
    vector<int> choices;
    int result;
};

class RPSLS_Core
{
public:
    RPSLS_Core();
    GameResult play(int choice);
};

#endif // RPSLS_CORE_H
