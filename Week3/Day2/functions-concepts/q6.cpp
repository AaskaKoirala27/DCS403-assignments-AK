// 6. Inline Functions
// Create an inline function `cube(int n)` that returns the cube of a number.

#include <iostream>
using namespace std;
inline int cube(int n) {
    return n * n * n;
}
int main() {
    int number;
    cout << "Euta number halnu hos: ";
    cin >> number;
    cout << "The cube of " << number << " is " << cube(number) << endl;
    return 0;
}
