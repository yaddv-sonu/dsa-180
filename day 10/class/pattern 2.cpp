/*
print the pattern

        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

*/

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin>>n;

    int row, col;
    for (row = 1; row <=n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        for (col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << endl;
    }

    return 0;
}