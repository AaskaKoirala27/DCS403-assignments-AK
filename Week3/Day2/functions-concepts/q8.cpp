// 8. Passing Arguments by Reference
// Write a function `swapValues(int &a, int &b)` that swaps two numbers using references.

#include <iostream>
using namespace std;

void swapValues(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore swapping: x = " << x << ", y = " << y << endl;

    swapValues(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
