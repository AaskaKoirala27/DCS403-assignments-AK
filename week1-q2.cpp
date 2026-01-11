// Q2. Temperature Conversion (Celsius to Fahrenheit)**
// Problem Statement
// Write a C++ program that converts a temperature value from **Celsius** to **Fahrenheit**.


#include <iostream>
using namespace std;

int main() {
    float celsius;
    const float factor1 = 9.0;
    const float factor2 = 5.0;
    const float constantValue = 32.0;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    float fahrenheit = (celsius * factor1 / factor2) + constantValue;

    cout << "Fahrenheit: " << fahrenheit << endl;

    return 0;
}
