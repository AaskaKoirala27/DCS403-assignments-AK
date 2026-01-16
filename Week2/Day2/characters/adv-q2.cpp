// Convert every alternate character in a string to uppercase, starting with lowercase.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;  

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {           
            if (count % 2 == 0)          
                str[i] = tolower(str[i]);
            else                          
                str[i] = toupper(str[i]);
            count++;                      
        }
    }

    cout << "Alternated string: " << str << endl;

    return 0;
}
