// Write a program to calculate the sine, cosine, and tangent of an angle in radians.
#include <iostream>
#include <cmath>
using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double angle;

    cout << "Enter angle in radians (example: pi/4 = 0.785398): ";
    cin >> angle;

    cout << "sin = " << sin(angle) << endl;
    cout << "cos = " << cos(angle) << endl;
    cout << "tan = " << tan(angle) << endl;

    return 0;
}
