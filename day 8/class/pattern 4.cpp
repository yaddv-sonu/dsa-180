/* print the pattern 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1



*/

#include <iostream>
using namespace std;
int main()
{
    int row, col;

    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 5; col >=1 ; col = col -1)
        {

            cout << col << " ";
        }

        cout << endl;
    }

    return 0;
}