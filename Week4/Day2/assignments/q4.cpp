// Row-wise and Column-wise Processing
// 4. Find Largest Element in Each Row
// Input a `3×3` matrix and print the largest element of each row.

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

    cout << "\nRow max values:\n";
    for (int i = 0; i < 3; i++) {
        int max = arr[i][0];   

        for (int j = 1; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }

        cout << max << " ";
    }
    cout << endl;

    return 0;
}
