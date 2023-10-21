/* print the pattern
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10

*/

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {

            cout << "10"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}