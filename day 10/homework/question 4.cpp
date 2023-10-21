/*
Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


             E
           E D
         E D C
       E D C B
     E D C B A


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
        for (col = 1; col <= n - row; col++)
        {
            cout << "  ";
        }
        for (col = n; col >= n - (row - 1); col--)

        {
            char name= 'A'+(col-1);
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}