/*

4: Swap 2 numbers a, b without using extra variables. Range of
-10000<=a,b<=100000.

*/

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{

    int c = a + b;
    a = c - a;
    b = c - b;
}

int main()
{
    int a, b;
    cout << "enter the value of a,b" << endl;
    cin >> a >> b;
    swap(a, b);
    cout << a << endl
         << b;
    return 0;
}