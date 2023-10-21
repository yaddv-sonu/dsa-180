/*
Find the second largest element in an array of unique elements of size n. Where n>3.

*/

#include <iostream>
using namespace std;
int largest(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    return ans;
}
int main()
{
    int n;
    cout << "enter the element of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int large = largest(arr, n);
    int second = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] != large)
        {
            second = arr[i];
        }
    }

    cout << second;

    return 0;
}