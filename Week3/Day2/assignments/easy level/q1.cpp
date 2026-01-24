// 1. Solid Square of Stars
// Input `n` and print a solid square pattern of `*`.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {          // Outer loop for rows
        for (int j = 1; j <= n; j++) {      // Inner loop for columns
            cout << "*";
        }
        cout << endl;                        
    }

    return 0;
}
