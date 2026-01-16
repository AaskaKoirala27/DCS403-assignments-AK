// Write a program to find the largest and smallest of two numbers using `fmax()` and `fmin()`.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "First number halnus: ";
    cin >> a;
    cout << "Second number halnus: ";
    cin >> b;
    cout << "Duita madhye largest = " << fmax(a, b) << endl;
    cout << "Duita madhye smallest = " << fmin(a, b) << endl;

    return 0;
}
