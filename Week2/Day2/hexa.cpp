// Q2 Case study: Converting a Hexadecimal Digit to a Decimal Value
// Demonstrated ASCII arithmetic - converting chars into numeric value.
// hints:
// 'A -> 65'
// Need condition to handle: 0 to 9 and A to F
// 'A'= 65 -> 10 +(65-65) = 10

#include <iostream>
using namespace std;
int main() {
    char hexaDigit;
    int decimalValue;
    cout << "Enter a hexadecimal digit (0-9, A-F): ";
    cin >> hexaDigit;
    if (hexaDigit >= '0' && hexaDigit <= '9') {
        decimalValue = hexaDigit - '0';  
    } else if (hexaDigit >= 'A' && hexaDigit <= 'F') {
        decimalValue = 10 + (hexaDigit - 'A');  
    } else {
        cout << "Invalid hexadecimal digit!" << endl;
        return 1;  
    }
}