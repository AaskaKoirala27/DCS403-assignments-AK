// Write a program to reverse a string.

#include <iostream>
#include <algorithm>  // this is for reverse()
using namespace std;

int main() {
    string str;

    cout << "String halnus: ";
    getline(cin, str);  

    reverse(str.begin(), str.end());  

    cout << "Reversed vako string is: " << str << endl;

    return 0;
}
