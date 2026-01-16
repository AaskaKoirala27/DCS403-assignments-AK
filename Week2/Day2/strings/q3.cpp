// Write a program to check if a string is a palindrome.

#include <iostream>
#include <algorithm>  // this is for reverse()
using namespace std;

int main() {
    string str, reversedStr;

    cout << "String halnus: ";
    getline(cin, str);  

    reversedStr = str; 
    reverse(reversedStr.begin(), reversedStr.end());  

    if (str == reversedStr)
        cout << "Yo string palindrome ho." << endl;
    else
        cout << "Yo string palindrome haina." << endl;

    return 0;
}
