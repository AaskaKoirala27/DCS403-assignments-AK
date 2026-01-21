// Reverse Digits of a Number (Using `while` loop)

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int reverse = 0;

    cout << "Euta number halnu hos: ";
    cin >> number;

    while (number != 0) {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    cout << "Ulto number: " << reverse << endl;

    return 0;
}
