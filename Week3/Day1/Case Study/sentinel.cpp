// Detecting a sentinel values , asking for inputs then when the sentinel value is written, stopped
//(loop lai exit garni define garni = sentinel)

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Numbers halnus one by one. Enter 0 to stop." << endl;

    while (true) {
        cout << "Euta number halnus: ";
        cin >> number;

        if (number == 0) {  // Check for sentinel
            cout << "Sentinel value entered. Stopping input." << endl;
            break;  // Exit the loop
        }

        // cout << "You entered: " << number << endl;
    }

    cout << "Program ended." << endl;
    return 0;
}




