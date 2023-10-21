/*
Fourth Pattern:

      A B C D
      A B C
      A B
      A



*/

#include <iostream>
using namespace std;
int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <=4 - row + 1; col++)
        {
            char res = 'A' + (col - 1);
            cout << res
                 << " ";
        }
        cout << endl;
    }
    return 0;
}