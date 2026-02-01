//Basics of 2D Arrays
// 1. Input and Display a 3×3 Matrix 
// Declare a `3×3` integer array. Take input from the user and display it in matrix form.

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    // Input elements
    cout << "Enter 9 elements separated by spaces\n";
    cout << "Enter 9 elements:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
