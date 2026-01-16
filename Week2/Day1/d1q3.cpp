// Q3 Write a program to assign grades based on marks (A,B,C,F). 
// MARKS RANGE: 80-100 = A, 60-79 = B, 40-59 = C, Below 40 = F


#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;
int main() {
    int marks;
    cout << "Tapaiko marks halnu hos (0-100): ";
    cin >> marks;
    if (marks >= 80 && marks <= 100) {
        cout << "Tapaiko grade is: A" << endl;
    } else if (marks >= 60 && marks < 80) {
        cout << "Tapaiko grade is: B" << endl;
    } else if (marks >= 40 && marks < 60) {
        cout << "Tapaiko grade is: C" << endl;
    } else if (marks < 40 && marks >= 0) {
        cout << "Tapaiko grade is: F" << endl;
    } else {
        cout << "Kripaya sahi marks halnu hos (0-100)." << endl;
    }
    return 0;
}

// using switch case:

// #include <iostream>
// using namespace std;
// int main() {
//     int marks;
//     cout << "Tapaiko marks halnu hos (0-100): ";
//     cin >> marks;
//     char grade;
//     switch (marks / 10) {
//         case 10:
//         case 9:
//         case 8:
//             grade = 'A';
//             break;
//         case 7:
//         case 6:
//             grade = 'B';
//             break;
//         case 5:
//         case 4:
//             grade = 'C';
//             break;
//         default:
//             grade = 'F';
//     }
//     if (marks >= 0 && marks <= 100) {
//         cout << "Tapaiko grade is: " << grade << endl;
//     } else {
//         cout << "Kripaya sahi marks halnu hos (0-100)." << endl;
//     }
//     return 0;
// }