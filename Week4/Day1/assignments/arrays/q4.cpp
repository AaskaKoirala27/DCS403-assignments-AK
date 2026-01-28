// Array Searching Algorithms
// 4. Linear Search
// Search for a number in an array using linear search.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter number to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Number found at position " << i + 1 << endl;
            return 0;
        }
    }

    cout << "Number not found" << endl;
    return 0;
}
