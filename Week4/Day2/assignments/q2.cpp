// Basics of 2D Arrays
// 2. Sum of All Elements in a 2×3 Array
// Write a program that calculates and prints the sum of all elements in a 2×3 array.

#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    int sum = 0;

    // input elements row-wise
    cout << "Enter elements for a 2x3 array (separated by space):\n";

    for (int i = 0; i < 2; i++) {
        cout << "Row " << i + 1 << ":\n";
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    // output sum
    cout << "\nSum = " << sum << endl;

    return 0;
}
