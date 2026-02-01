//  Row-wise and Column-wise Processing
// 3. Print Row-wise and Column-wise Sums**
// Given a `3×3` array, print:
// - Sum of each row
// - Sum of each column

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

    cout << "\nRow sums:\n";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        cout << rowSum << " ";
    }


    cout << "\nColumn sums:\n";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += arr[i][j];
        }
        cout << colSum << " ";
    }
    cout << endl;

    return 0;
}
