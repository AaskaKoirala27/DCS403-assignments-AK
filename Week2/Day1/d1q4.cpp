// Q4 Write a C++ program to check if a number is positive and even, positive and odd, negative and zero.

#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Euta number halnu hos: ";
    cin >> number;
    if (number > 0) {
        if (number % 2 == 0) {
            cout << "Tapaiko number sakaratmak (positive) ra jod (even) xa." << endl;
        } else {
            cout << "Tapaiko number sakaratmak (positive) ra bijod (odd) xa." << endl;
        }
    } else if (number < 0) {
        cout << "Tapaiko number nakaratmak (negative) xa." << endl;
    } else {
        cout << "Tapaiko number shunya (zero) ho." << endl;
    }
    return 0;
}
