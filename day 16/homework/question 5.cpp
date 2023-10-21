/*
Write a program to convert binary to Octal numbers
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int decimal = 0;
    int base = 1;
    while (n > 0)
    {
        int rem = n % 10;
        decimal = rem * base + decimal;
        n = n / 10;
        base = base * 2;
    }
    int num = decimal;
    base = 1;
    int octal = 0;
    while (num > 0)
    {
        int rem = num % 8;
        octal = rem * base + octal;
        num = num / 8;
        base = base * 10;
    }

    cout << octal;

    return 0;
}