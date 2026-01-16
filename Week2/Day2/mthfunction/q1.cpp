// Write a program to find the square root, power, and absolute value of a number using mathematical functions.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    cout << "Euta number halnu hos: ";
    cin >> num;

    cout << "Square root of " << fabs(num) << " = "
         << sqrt(fabs(num)) << endl;

    cout << "2 raised to power " << sqrt(fabs(num)) << " = "
         << pow(2, sqrt(fabs(num))) << endl;

    cout << "Absolute value of " << num << " = "
         << fabs(num) << endl;

    return 0;
}
