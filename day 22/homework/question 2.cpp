/*
Calculate the average of elements in an array of size 18.


*/

#include <iostream>
using namespace std;

int main()
{

    int arr[18];
    cout << "enter the value of array " << endl;
    for (int i = 0; i < 18; i++)
    {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < 18; i++)
    {
        sum += arr[i];
    }

    double ans = sum / 18;

    cout << ans;
    return 0;
}