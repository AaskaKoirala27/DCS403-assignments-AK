// 3. Number Triangle
// Print a triangle of increasing numbers.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {           // Outer loop for rows
        for (int j = 1; j <= i; j++) {       // Inner loop for numbers
            cout << j;
        }
        cout << endl;                         
    }

    return 0;
}
