/*
Use a Selection Sort Algorithm to sort the array of integers in increasing order by
taking the highest number to last place. Question was explained in the class.

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    cout << "enter the array element" << endl;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        int index = i;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
