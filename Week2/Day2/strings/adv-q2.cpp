// Find and print the longest word from a sentence.

#include <iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence); 

    string longestWord = "", currentWord = "";

    for (int i = 0; i <= sentence.length(); i++) {
       
        if (i < sentence.length() && sentence[i] != ' ') {
            currentWord += sentence[i];
        } else {
            
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord = "";  
        }
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;
}
