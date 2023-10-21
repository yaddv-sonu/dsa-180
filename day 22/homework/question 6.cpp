/*
Find the second largest element in an array of unique elements of size n. Where n>3.

*/

#include <iostream>
#include <climits> // Include the <climits> header for INT_MIN
using namespace std;

int main() {
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    cout << "Second largest element: " << second_largest << endl;

    return 0;
}
