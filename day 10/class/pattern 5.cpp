/*
print the pattern


        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

*/

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int row, col;
    for (row = 1; row <=n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  " ;
        }

        for (col = row; col>=1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}