// Remove digits and special symbols from a string, keeping only letters.

#include <iostream>
#include <cctype>  // this is for isalpha()
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);  

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {      
            result += str[i];        
        }
    }

    cout << "Resulting string: " << result << endl;

    return 0;
}
