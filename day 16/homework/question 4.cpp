/*
Write a program to convert Octal numbers to decimal numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the octal number: ";
    cin >> n;

    int decimal = 0;
    int base = 1;

    while (n > 0)
    {
        int rem = n % 10;
        decimal = rem * base + decimal;
        n = n / 10;
        base = base * 8;
    }

    cout << "Decimal representation: " << decimal << endl;

    return 0;
}
