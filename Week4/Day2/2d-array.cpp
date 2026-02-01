// Passing a 2D array into a function
// static
// #include <iostream>
// using namespace std;

// void printMatrix (const int m[][4], int rows) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < 4; j++) {
//             cout << m[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int matrix[3][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12}
//     };

//     printMatrix(matrix, 3);

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask for size
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Allocate a single 1D array
    int* matrix = new int[rows * cols];

    // Input elements row by row
    for (int i = 0; i < rows; i++) {
        cout << "Enter elements of row " << i << " (space separated): ";
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i * cols + j];  // i*cols + j maps 2D to 1D
        }
    }

    // Print the matrix
    cout << "\nThe matrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i * cols + j] << " ";
        }
        cout << endl;
    }

    // Free memory
    delete[] matrix;

    return 0;
}
