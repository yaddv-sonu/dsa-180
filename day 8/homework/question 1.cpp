/* print the pattern
4 4 4 4 4
4 4 4 4 4
4 4 4 4 4
4 4 4 4 4
4 4 4 4 4


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
            cout << "4"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}