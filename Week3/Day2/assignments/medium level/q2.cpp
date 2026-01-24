// 2. Inverted Right-Angled Triangle
// Print a triangle in reverse order.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {         // Outer loop for rows
        for (int j = 1; j <= i; j++) {     // Inner loop for stars
            cout << "*";
        }
        cout << endl;                      
    }

    return 0;
}
