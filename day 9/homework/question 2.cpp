/*
Second Pattern:

    A
    A B
    A B C
    A B C D
    A B C D E


*/

#include <iostream>
using namespace std;
int main()
{

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            char name = 'A' + (col - 1);
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}