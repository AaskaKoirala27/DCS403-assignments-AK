// 7. Static, Global, and Static Local Variables
// Demonstrate the difference between global, local, and static local variables.

#include <iostream>
using namespace std;

int globalCount = 0; // Global variable

void showCounter() {
    int localCount = 0;      // Local variable
    static int count = 0;    // Static local variable

    localCount++;
    count++;
    globalCount++;

    cout << "Local Count: " << localCount
         << ", Static Count: " << count
         << ", Global Count: " << globalCount << endl;
}
void repeatCounter(int times) {
    for (int i = 1; i <= times; i++) {
        cout << "\nFunction call " << i << ":" << endl;
        showCounter(); // Calling another function
    }
}

int main() {
    int times;

    cout << "How many times do you want to call the function? ";
    cin >> times;
// calling the helper function
    repeatCounter(times);

    return 0;
}
