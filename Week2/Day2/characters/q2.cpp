// Write a program to convert lowercase letters to uppercase and vice versa.

#include <iostream>
#include <cctype>  // this is for toupper() and tolower()
using namespace std;

int main() {
    char ch;

    cout << "Euta character halnu hos: ";
    cin >> ch;

    if (islower(ch)) {
        cout << "Uppercase: " << char(toupper(ch)) << endl;
    }
    else if (isupper(ch)) {
        cout << "Lowercase: " << char(tolower(ch)) << endl;
    }
    else {
        cout << "Yo character letter haina. Letter halnus." << endl;
    }

    return 0;
}
