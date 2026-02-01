// Problem: Grading a Multi-Choice Test

#include <iostream>
using namespace std;

int main() {
    int students, questions;

    cout << "Students ko sankhya halnu hos: ";
    cin >> students;

    cout << "Questions kati ota xa?: ";
    cin >> questions;

    char key[questions];
    char ans[students][questions];

    // input answer key
    cout << "\nAnswer key serially rakhnus according to the number of questions: \n";
    cout << "Answer key (for eg: abcd or ABCD): ";
    for (int i = 0; i < questions; i++) {
        cin >> key[i];

        if (key[i] >= 'a' && key[i] <= 'z')
            key[i] -= 32;
    }
    cout << "\nStudent haruko answer ni serially rakhnus\n";

    for (int i = 0; i < students; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < questions; j++) {
            cin >> ans[i][j];

            if (ans[i][j] >= 'a' && ans[i][j] <= 'z')
                ans[i][j] -= 32;

            if (ans[i][j] < 'A' || ans[i][j] > 'D')
                ans[i][j] = 'X';
        }
    }


    cout << "\nStudent ko results\n";
    for (int i = 0; i < students; i++) {
        int score = 0;

        for (int j = 0; j < questions; j++) {
            if (ans[i][j] == key[j])
                score++;
        }

        float percent = (score * 100.0) / questions;

        cout << "Student " << i + 1 << ": "
             << score << "/" << questions
             << " (" << percent << "%) ";

        if (percent >= 40)
            cout << "Pass, Badhai xa!";
        else
            cout << "Fail, Feri try garnu hoos!";

        cout << endl;
    }

    return 0;
}
