// Write a program to concatenate two strings.

#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cout << "First string halnus: ";
    getline(cin, str1);

    cout << "Second string halnus: ";
    getline(cin, str2);

    string concatenated = str1 + " " + str2;  

    cout << "Concatenated String: " << concatenated << endl;

    return 0;
}
