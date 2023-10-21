/* print the pattern
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e


*/

#include <iostream>
using namespace std;

int main()
{

    int row, col;
    for (int row = 1; row <= 5; row++)
    {

        for (int col = 1; col <= 5; col++)
        {
            char name = 'a' + (col - 1);

            cout << name << " ";
        }

        cout << endl;
    }
    return 0;
}