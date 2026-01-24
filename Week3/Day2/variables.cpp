//
#include <iostream>
using namespace std;

int globalCount = 0; // Global variable
void showCounter() {
    int localCount = 0; // Local variable
    static int count = 0; // Static variable
    localCount++;
    count++;
    globalCount++;
    cout << "Local Count: " << localCount << ",Static Count: " << count << ", Global Count: " << globalCount << endl;
}
int main() {
    showCounter();
    showCounter();
    return 0;
}
// Demonstrates local, static, and global variables in C++