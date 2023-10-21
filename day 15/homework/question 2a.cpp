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
    int ans = 1;
    int i = 1;
    do
    {
        ans = ans * i;
        i++;
    } while (i <= n);

    cout << ans;
    return 0;
}