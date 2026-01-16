// Write a program to check if a character is a letter, digit, or special character.

#include <iostream>
#include <cctype>  // this is for isalpha(), isdigit(), ispunct()
using namespace std;

int main() {
    char ch;

    cout << "Euta character halnu hos: ";
    cin >> ch;

    if (isalpha(ch))
        cout << ch << " letter ho." << endl;
    else if (isdigit(ch))
        cout << ch << " digit ho." << endl;
    else if (ispunct(ch))
        cout << ch << " special character ho." << endl;
    else
        cout << ch << " Milena, feri try garnus." << endl;

    return 0;
}
