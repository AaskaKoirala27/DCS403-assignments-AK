// Write a program to calculate the roots of a quadratic equation.

#include <iostream>
#include <cmath>  // this is for sqrt()
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    double D = b*b - 4*a*c;  // calculate the 'D' which is known as discriminant

    if (D > 0) {
        // real and distinct roots
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and distinct: " << x1 << " and " << x2 << endl;
    }
    else if (D == 0) {
        // real and equal roots
        double x = -b / (2*a);
        cout << "Roots are real and equal: " << x << " and " << x << endl;
    }
    else {
        // imaginary roots
        double realPart = -b / (2*a);
        double imagPart = sqrt(-D) / (2*a);
        cout << "Roots are imaginary: " << realPart << " + " << imagPart << "i and "
             << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
