#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void CleanInput()
{
    while(getchar()!='\n');
}

int Choice(int from, int to)
{
    char* s = (char*)calloc(256,1);
    cout << "Input your choice: ";
    while(true)
    {
        cin.getline(s, 255);
        int c = atoi(s);
        if(c >= from && c <= to) return c;
        cout << "Sorry, try again: ";
    }
}
