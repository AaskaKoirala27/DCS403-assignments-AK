// Passing Arrays to Functions
// 3. Sum of Elements Using a Function**
// Write a function that accepts an integer array and returns the sum of its elements.

#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int result = sumArray(arr, n);

    cout << "\nSum of elements = " << result << endl;

    return 0;
}
