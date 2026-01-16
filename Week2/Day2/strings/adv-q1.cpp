// Count how many words are in a sentence.

#include <iostream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);  

    int words = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ' && (i == 0 || sentence[i - 1] == ' ')) {
            words++;
        }
    }

    cout << "Number of words: " << words << endl;

    return 0;
}
