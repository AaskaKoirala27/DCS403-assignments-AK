// Count Digits of a Number (Using `do-while` loop)

#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Euta number halnu hos: ";
    cin >> number;

    do {
        number = number / 10;
        count++;
    } while (number != 0);

    cout << "Digit ko sankhya: " << count << endl;

    return 0;
}
