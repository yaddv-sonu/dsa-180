/*
Write a program to convert decimal numbers to binary numbers using a for loop.

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int ans = 0;
    int base = 1;
    for (int i = 0; n > 0; i++)
    {
        int rem = n % 2;
        ans = rem * base + ans;
        n /= 2;
        base *= 10;
    }
    cout << ans;
    return 0;
}