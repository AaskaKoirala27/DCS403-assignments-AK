// 3. Passing Arguments by Value
// Write a function `square(int n)` that prints the square of a number. Verify that the original number in `main()` does not change.

#include <iostream>
using namespace std;

void square(int n)
{
    n = n * n;
    cout << "Square inside function: " << n << endl;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Original number = " << num << "\n";

    square(num);

    cout << "After calling square function, original number = " << num << "\n";

    return 0;
}

