// Q2 Write a C++ program to find the greater of two numbers.

#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    cout << "First number halnu hos: ";
    cin >> num1;
    cout << "Second number halnu hos: ";
    cin >> num2;
    if (num1 > num2) {
        cout << "Duita madhye thulo number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "Duita madhye thulo number is: " << num2 << endl;
    } else {
        cout << "Dui ota number equal chan." << endl;
    }
    return 0;
}
