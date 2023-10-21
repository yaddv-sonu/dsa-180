/*

4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…,
if the user puts any invalid number, don’t do anything. (Use switch here)

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "jan";
        break;
    case 2:
        cout << "feb";
        break;
    case 3:
        cout << "march";
        break;
    case 4:
        cout << "april";
        break;
    case 5:
        cout << "may";
        break;
    case 6:
        cout << "june";
        break;
    case 7:
        cout << "july";
        break;
    case 8:
        cout << "aug";
        break;
    case 9:
        cout << "sep";
        break;
    case 10:
        cout << "oct";
        break;
    case 11:
        cout << "nov";
        break;
    case 12:
        cout << "dec";
        break;

    default:
    cout<<"enter valid number";
        break;
    }
}