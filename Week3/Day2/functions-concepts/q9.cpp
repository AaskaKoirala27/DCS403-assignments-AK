// 9. Constant Reference Parameters
// Write a function `display(const string &msg)` that takes a constant reference to a string and prints it.

#include <iostream>
using namespace std;

void display(const string &msg)
{
    cout << "Message: " << msg << endl;
}

int main()
{
    string text;

    cout << "Enter a message: ";
    getline(cin, text);
    cout << "\n";
    display(text);

    return 0;
}
