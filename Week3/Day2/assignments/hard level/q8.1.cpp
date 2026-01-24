// 8. Hollow Square Pattern
// Print a square of stars with hollow inside.

//fixed size square, both rows and columns same
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {            // Outer loop for rows
        for (int j = 1; j <= n; j++) {        // Inner loop for columns
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;                         // Move to next row
    }

    return 0;
}

