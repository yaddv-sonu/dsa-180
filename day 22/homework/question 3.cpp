/*
 Find the index of a specific element in an array, if the element is nor present, print -1.
 Ask the size of the array from the user and then implement it.


*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of n" << endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element;
    cout << "enter the element which is find in array" << endl;
    cin >> element;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            index = i;
        }
    }

    if (index != -1)
    {
        cout << "the element is present"
             << " " << index << endl;
        ;
    }

    else
    {
        cout << "element is not present "
             << " " << index;
    }

    return 0;
}