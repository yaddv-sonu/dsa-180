/*

Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

             5
           5 4
         5 4 3
       5 4 3 2
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
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (col = n; col >= n - (row - 1); col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}