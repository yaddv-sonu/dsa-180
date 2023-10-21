/*

1: Take 20 elements from user input and find its sum with the help of an array.

*/

#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    cout << "enter the value of array" << endl;
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 20; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}