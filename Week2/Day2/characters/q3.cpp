// Write a program to count the number of vowels and consonants in a given string.

#include <iostream>
#include <cctype>  // this is for isalpha() and tolower()
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "String halnus: ";
    getline(cin, str);  

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  
        if (isalpha(ch)) {  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels ko sankhya: " << vowels << endl;
    cout << "Consonants ko sankhya: " << consonants << endl;

    return 0;
}
