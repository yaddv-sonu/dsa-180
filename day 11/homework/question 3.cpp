/*

Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


             A
           A B A
         A B C B A
       A B C D C B A
     A B C D E D C B A

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int col, row;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }

        for (col =1; col <= row; col++)
        {
            char name = 'A' + col - 1;
            cout << name << " ";
        }

        
        for (col =row-1; col >=1; col--)
        {
            char name = 'A' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}