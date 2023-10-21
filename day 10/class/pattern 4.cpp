/*
print the pattern

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
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;
    int row, col;
    for (row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= row; col++)
        {
            char name = 'A' + (col - 1);

            cout << name << " ";
        }
        cout << endl;
    }

    return 0;
}