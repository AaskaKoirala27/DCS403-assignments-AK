// 1.Defining and Calling a Function
//Write a function `add()` that takes two integers as parameters and returns their sum. Call this function from `main()` and display the result.

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    cout << "First number halnu hos: ";
    cin >> num1;

    cout << "Second number halnu hos: ";
    cin >> num2;

    result = add(num1, num2);

    cout << "Duita number ko sum = " << result << "\n";

    return 0;
}

