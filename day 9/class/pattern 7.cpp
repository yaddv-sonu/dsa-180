/* print the pattern
1 2  3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
using namespace std;
int main()
{

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5 - row + 1; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}