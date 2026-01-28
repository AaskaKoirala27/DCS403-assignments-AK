// Arrays (Basics)
// 1. Store and Display 5 Integers**
// Declare an array of 5 integers. Take input from the user and print all elements.

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nThe entered numbers are:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
