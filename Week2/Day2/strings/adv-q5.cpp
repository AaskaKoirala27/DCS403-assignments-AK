// Compress a string by counting consecutive repeated characters.
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[26] = {0}; 

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << freq[i];
        }
    }
    cout << endl;

    return 0;
}
