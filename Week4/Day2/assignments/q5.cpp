// Matrix-Level Computations
// Q5. Transpose of a Matrix
// Print the transpose of a given `3×3` matrix.

#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nTranspose of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
