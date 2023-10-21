/*

1: An array is given in decreasing order with Key, Find the index of key, 
if key is not present, print -1;

*/

/*
Binary Search

*/

#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start, end, mid;
    start = 0;
    end = n - 1;

    while (start <= end)
    {
     mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            start =mid-1;
        }
        else
        {
            end = mid +1;
        }
    }
   

     return -1;
    
}

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[1000];
    cout << "enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout<<"enter the value of key"<<endl;
    cin >> key;


    cout << binarysearch(arr, n, key);
    return 0;
}