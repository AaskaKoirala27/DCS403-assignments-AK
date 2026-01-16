//IMP: A year is a leap year if it is divisible by 4 but not divisible by 100, except if it is also divisible by 400.
// Write a C++ program to check if a given year is a leap year or not.

#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Euta year halnu hos: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " leap year ho." << endl;
    } else {
        cout << year << " leap year hoina." << endl;
    }
    return 0;
}