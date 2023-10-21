/*

 Find the third smallest element in an array of unique elements size n. Where n>3.


*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    int third_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            third_smallest = second_smallest;
            second_smallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] < second_smallest && smallest != arr[i])
        {
            third_smallest = second_smallest;
            second_smallest = arr[i];
        }

        else if (arr[i] < third_smallest && second_smallest != arr[i] && smallest != arr[i])
        {
            third_smallest = arr[i];
        }
    }

    cout << third_smallest;

    return 0;
}
