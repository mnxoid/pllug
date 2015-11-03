#include "block.h"
#include <iostream>

using namespace std;

int Block::N = 1;

Block::Block()
{
    cout << "Block " << N << ":" << endl;
    N++;
}

Block::~Block()
{
    cout << "---------------------------" << endl;
}

Block::Block(string message)
{
    cout << "Block " << N << ": " << message << endl;
    N++;
}
