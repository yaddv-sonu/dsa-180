/* print the pattern

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *



    */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the vaalue of n" << endl;
    cin >> n;
    int col, row;

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}