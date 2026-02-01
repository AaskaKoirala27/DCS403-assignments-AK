// Matrix-Level Computations
// 9.  Check if a Matrix is Symmetric
// Determine if a `3×3` matrix is symmetric.

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) { 
            cout << "Comparing matrix[" << i << "][" << j << "] = " << matrix[i][j]
                 << " with matrix[" << j << "][" << i << "] = " << matrix[j][i] << endl;
            if (matrix[i][j] != matrix[j][i]) {
                cout << "\nThe matrix is not symmetric.\n";
                return 0; 
            }
        }
    }

    cout << "\nThe matrix is symmetric.\n";

    return 0;
}




