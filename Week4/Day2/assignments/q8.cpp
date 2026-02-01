// Matrix-Level Computations
// 8. Passing a 2D Array to a Function
// Write a function `printMatrix()` that prints a `3×3` matrix.

#include <iostream>
using namespace std;

void printMatrix(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3];

    cout << "Enter elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix is:\n";
    printMatrix(matrix, 3);

    return 0;
}
