/*
Write a program to convert decimal numbers to Octal numbers.

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    int octal = 0;
    int base = 1;

    while (n > 0)
    {
        int remainder = n % 8;
        octal = octal + remainder * base;
        n = n / 8;
        base = base * 10;
    }

    cout << "Octal representation: " << octal << endl;

    return 0;
}
