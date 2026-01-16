// Remove all vowels from a string.

#include <iostream>
using namespace std;

int main() {
    string str;
    string result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                
                break;
            default:
                result += ch; 
        }
    }

    cout << "String without vowels: " << result << endl;

    return 0;
}
