// 7. Diamond Pattern
// Combine full and inverted pyramids to make a diamond.

#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter the number of rows for the diamond (half): ";
    cin >> n;

    // Upper half (full pyramid)
    for (int i = 1; i <= n; i++) {                 // Outer loop for rows
        for (int j = 1; j <= n - i; j++) {         // Inner loop for spaces
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {   // Inner loop for stars
            cout << "*";
        }
        cout << endl;                            
    }

    // Lower half (inverted pyramid)
    for (int i = n - 1; i >= 1; i--) {             // Outer loop for rows
        for (int j = 1; j <= n - i; j++) {         // Inner loop for spaces
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {   // Inner loop for stars
            cout << "*";
        }
        cout << endl;                              
    }

    return 0;
}