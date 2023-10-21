/*
2: Insertion Sort Algorithm to sort the array of integers in increasing order
if we start from the last element of the array. Question was explained in the class.


*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[10000];
    cout << "enter the array element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >=1; i--)
    {
        for (int j = i; j<n; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }

            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}