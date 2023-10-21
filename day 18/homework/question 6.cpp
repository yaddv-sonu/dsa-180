/*
Given two numbers n, r. Find nCr (Combination). Use Function here.

*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = i * fact;
    }
    return fact;
}

long long ncrfactorial(int n, int r)
{

    if (n < r)
    {
        return 0;
    }

    long long num = factorial(n);
    long long den = factorial(r) * factorial(n - r);

    return num / den;
}

int main()
{
    int n, r;
    cout << "enter the value of n" << endl;
    cin >> n >> r;

    cout << ncrfactorial(n, r);
    return 0;
}