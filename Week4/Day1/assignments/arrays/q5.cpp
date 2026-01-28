// 5. Binary Search 
// Search for an element using binary search in a sorted array.

#include <iostream>
#include <algorithm> // for sort()
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers (any order):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array in ascending order
    sort(arr, arr + n);

    cout << "Array sorted for binary search:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Enter number to search: ";
    cin >> key;

    // Step 2: Binary search
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at position " << mid + 1 << endl;
            return 0;
        } 
        else if (arr[mid] < key) {
            low = mid + 1;  // search right half
        } 
        else {
            high = mid - 1; // search left half
        }
    }

    cout << "Element not found in the array" << endl;
    return 0;
}
