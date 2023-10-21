/*


       *
     * *
   * * *
 * * * *
* * * * *


*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of name"<<endl;
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
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}