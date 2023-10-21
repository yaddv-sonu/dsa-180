/*
print the pattern

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int row, col;

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}