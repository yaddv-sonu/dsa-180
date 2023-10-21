/*
Write a program to convert Octal numbers to binary numbers
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number n" << endl;
    cin >> n;

    // convert octal into decimal
    int decimal = 0;
    int base = 1;
    while (n > 0)
    {
        int rem = n % 10;
        decimal = rem * base + decimal;
        n = n / 10;
        base = base * 8;
    }
    // convert decimal to binary
    int num = decimal;

    int binary = 0;
    base = 1;
    while (num > 0)
    {
        int rem = num % 2;
        binary = rem * base + binary;
        num = num / 2;
        base = base * 10;
    }

    cout << binary;

    return 0;
}