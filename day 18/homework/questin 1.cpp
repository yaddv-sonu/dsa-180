/*

1: Find the cube of a number using Function.
*/

#include <iostream>
using namespace std;

int cube(int a)
{
    return a * a * a;
   
}

int main()
{
    int a;
    cout << "enter the value of a" << endl;
    cin >> a;

   cout<< cube(a);
    return 0;
}