// Problem: Sudoku

#include <iostream>
using namespace std;

int main() {

    int grid[9][9] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    cout << "Sudoku Grid:\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 9; i++) {
        bool used[10] = {false};
        for (int j = 0; j < 9; j++) {
            int num = grid[i][j];
            if (used[num]) {
                cout << "\nInvalid Sudoku\n";
                return 0;
            }
            used[num] = true;
        }
    }

    for (int j = 0; j < 9; j++) {
        bool used[10] = {false};
        for (int i = 0; i < 9; i++) {
            int num = grid[i][j];
            if (used[num]) {
                cout << "\nInvalid Sudoku\n";
                return 0;
            }
            used[num] = true;
        }
    }

    for (int r = 0; r < 9; r += 3) {
        for (int c = 0; c < 9; c += 3) {

            bool used[10] = {false};
            for (int i = r; i < r + 3; i++) {
                for (int j = c; j < c + 3; j++) {
                    int num = grid[i][j];
                    if (used[num]) {
                        cout << "\nInvalid Sudoku\n";
                        return 0;
                    }
                    used[num] = true;
                }
            }
        }
    }

    cout << "\nValid Sudoku\n";
    return 0;
}
