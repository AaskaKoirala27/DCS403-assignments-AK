// Q5 Use a ternary operator to find the smaller of two numbers.

#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    cout << "First number halnu hos: ";
    cin >> num1;
    cout << "Second number halnu hos: ";
    cin >> num2;
    double smaller = (num1 < num2) ? num1 : num2;
    cout << "Duita madhye the sano number is: " << smaller << endl;
    return 0;
}