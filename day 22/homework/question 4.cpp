/*

Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

*/

#include <iostream>
using namespace std;
int main()
{
    char name[26];
    for (int i = 0; i < 26; i++)
    {
        name[i] = 'a' + i;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << name[i] << " ";
    }
    return 0;
}