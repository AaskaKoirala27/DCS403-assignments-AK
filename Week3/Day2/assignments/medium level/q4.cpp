// 4. Alphabet Pattern
// Print a pattern of letters in increasing order.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {           // Outer loop for rows
        for (int j = 0; j <= i; j++) {      // Inner loop for columns
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;                        
    }

    return 0;
}
