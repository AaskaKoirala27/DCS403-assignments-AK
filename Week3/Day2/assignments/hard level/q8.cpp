// 8. Hollow Square Pattern
// Print a square of stars with hollow inside.


// for variable rows and columns
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++) {           // Outer loop for rows
        for (int j = 1; j <= cols; j++) {       // Inner loop for columns
            if (i == 1 || i == rows || j == 1 || j == cols)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;                           // Move to next row
    }

    return 0;
}
