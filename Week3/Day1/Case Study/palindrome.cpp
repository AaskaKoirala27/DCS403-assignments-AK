// checking if the number is a palindrome or not

#include <iostream>
using namespace std;
int main() {
    int number;
    int reversedNumber = 0;
    int originalNumber;
    int remainder;

    cout << "Euta number halnus: ";
    cin >> number;

    originalNumber = number; // original number yesma store hunxa

    // reverse garni kaam yo while loop le garxa
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // original number ra reversed number compare garni
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " palindrome ho." << endl;
    } else {
        cout << originalNumber << " palindrome hoina." << endl;
    }

    return 0;
}