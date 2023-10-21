/*
There are three numbers a,b,c. Put the value of a into b,
put value of b into c and put value of c into a. Do it using Function.


*/

#include <iostream>
using namespace std;

void put(int& a, int& b, int& c)
{

    int temp = a;
    a = b;
    b = c;
    c = temp;
}
int main()
{
    int a, b, c;
    cout << "enter the value of a, b, c" << endl;
    cin >> a >> b >> c;
    put(a, b, c);
    cout <<a<<endl<< b <<endl<< c<<endl;
    return 0;
}
