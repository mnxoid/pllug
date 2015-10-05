#include "rpsls_core.h"
#include "time.h"
#include "stdlib.h"

string names[] = {
    "Rock",
    "Paper",
    "Scissors",
    "Lizard",
    "Spock"
};

string actions[] = {
    "vaporizes",
    "disproves",
    "smashes",
    "poisons",
    "crushes",
    "eats",
    "decapitate",
    "cut",
    "covers"
};

int winMatrix[5][5][2] = {
    {{ 0, 0}, {-1, 8}, { 1, 4}, { 1, 4}, {-1, 0}},
    {{ 1, 8}, { 0, 0}, {-1, 7}, {-1, 5}, { 1, 1}},
    {{-1, 4}, { 1, 7}, { 0, 0}, { 1, 6}, {-1, 2}},
    {{-1, 4}, { 1, 5}, {-1, 6}, { 0, 0}, { 1, 3}},
    {{ 1, 0}, {-1, 1}, { 1, 2}, {-1, 3}, { 0, 0}}
};

RPSLS_Core::RPSLS_Core()
{
    srand(time(0));
}

GameResult RPSLS_Core::play(int choice, int iterations)
{
    GameResult gr;
    for(int i=0; i<iterations; ++i)
    {
        gr.choices.push_back(rand()%5);
    }
    gr.result = winMatrix[choice][gr.choices.at(iterations-1)][0];
    return gr;
}

string RPSLS_Core::message(int a, int b)
{
    if (a==b) return "It's a match";
    if(winMatrix[a][b][0]>0)
    {
        return string(names[a])+" "+actions[winMatrix[a][b][1]]+" "+names[b];
    } else {
        return string(names[b])+" "+actions[winMatrix[a][b][1]]+" "+names[a];
    }
}

