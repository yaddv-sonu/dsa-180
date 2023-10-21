/*
Find the factorial of a number n using a while loop and do a while loop.

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int i = 1;
    int ans = 1;
    while (i <= n)
    {
        ans = ans*i;
        i++;
    }
    cout << ans;

    return 0;
}