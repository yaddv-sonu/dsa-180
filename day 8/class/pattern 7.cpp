/*
print
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/

#include <iostream>
using namespace std;

int main()
{

    int row, col;

    for (int row = 1; row <= 5; row++)
    {
        char name = 'a' + (row - 1);

        for (int col = 1; col <= 5; col++)
        {
            cout << name << " ";
        }

        cout << endl;
    }

    return 0;
}