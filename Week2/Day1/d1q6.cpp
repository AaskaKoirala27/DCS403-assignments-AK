// Q6 Write a C++ program that prints the name of the day of the week based on a number entered by the user (1–7).
// using a switch case

#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Euta number halnu hos (1-7) to get the day of the week: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "It is Sunday." << endl;
            break;
        case 2:
            cout << "It is Monday." << endl;
            break;
        case 3:
            cout << "It is Tuesday." << endl;
            break;
        case 4:
            cout << "It is Wednesday." << endl;
            break;
        case 5:
            cout << "It is Thursday." << endl;
            break;
        case 6:
            cout << "It is Friday." << endl;
            break;
        case 7:
            cout << "It is Saturday." << endl;
            break;
        default:
            cout << "Kripaya 1 dekhi 7 samma ko number halnu hos." << endl;
    }
    return 0;
}

