// Array Manipulation
// 2. Find the Maximum Element in an Array**
// Input `n` elements and find the largest value.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: " << endl;
    cin >> n;

    int arr[n];   

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "\nMaximum element = " << max << endl;

    return 0;
}
