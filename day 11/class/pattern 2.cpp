/* Pattern-02
       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

   */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int row, col;
    for ( row = 1; row <= n; row++)
    {

        // print space
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        // 1 to row
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        // print row-1 to 1
        for (col = row - 1; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}