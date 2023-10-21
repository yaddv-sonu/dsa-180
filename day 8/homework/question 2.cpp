/* print the pattern 
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25


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

            cout << col*col
                 << " ";
        }

        cout << endl;
    }

    return 0;
}

