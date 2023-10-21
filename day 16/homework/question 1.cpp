/*
Write a program to convert binary numbers to decimal numbers using a for loop.

*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int ans = 0;

    for (int i = 0; n > 0; i++)
    {
        int rem = n % 10;
        ans = rem * pow(2, i) + ans;
        n /= 10;
    }

    cout << ans;

    return 0;
}