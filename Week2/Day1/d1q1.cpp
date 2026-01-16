// Q1 Write a C++ program to check if a number is positive.

#include <iostream>
using namespace std;
int main() {
    double number;

    cout << "Euta number halnu hos: ";
    cin >> number;

    if (number > 0) {
        cout << "Tapaiko number sakaratmak (positive) raheko xa." << endl;
    } else {
        cout << "Tapaiko number sakaratak (positive) xaina." << endl;
    }

    return 0;
}
