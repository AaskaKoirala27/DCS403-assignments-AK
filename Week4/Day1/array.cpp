// Passing an array to a function parameter.

#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int nums [] = {3, 6, 9};
    printArray(nums, 3);
    return 0;
}