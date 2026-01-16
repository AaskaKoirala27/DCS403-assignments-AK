//Count how many times each alphabet appears in a string (ignore case).

#include <iostream>
#include <cctype>  // for tolower() and isalpha()
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Letter frequencies: ";

    for (char letter = 'a'; letter <= 'z'; letter++) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (tolower(str[i]) == letter) {
                count++;
            }
        }
        if (count > 0) {
            cout << letter << ":" << count << "  ";
        }
    }
    cout << endl;

    return 0;
}
