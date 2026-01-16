// Write a program to find the length of a string.

#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "String halnus: ";
    getline(cin, str);  

    cout << "Length of string: " << str.length() << endl;

    return 0;
}
