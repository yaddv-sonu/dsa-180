/* print the Pattern



*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *


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

        // print star
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // print space
        for (col = 1; col <= 2 * (n - row); col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (row = n - 1; row >= 1; row--)
    {

        // print star
        for (col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        // print space
        for (col = 1; col <= 2 * (n - row); col++)
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