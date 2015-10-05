#ifndef RPSLS_CORE_H
#define RPSLS_CORE_H

#include <vector>
#include <string>

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
    GameResult play(int choice, int iterations);
    string message(int a, int b);
private:
    int result();
    static string actions[];
};

#endif // RPSLS_CORE_H
