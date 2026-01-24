// 5. Default Arguments
// Write a function `power(int base, int exponent = 2)` that calculates base raised to the given power. If the exponent is not provided, assume it is 2.

#include <iostream>
using namespace std;
int power(int base, int exponent = 2)
{
    int result = 1;
    for (int i = 0; i < exponent; ++i)
    {
        result *= base;
    }
    return result;
}
int main()
{
    int base, exponent;

    cout << "Base halnu hos: ";
    cin >> base;

    cout << "Exponent halnu hos (default 2 ko lagi 0 halnus): ";
    cin >> exponent;

    if (exponent == 0)
    {
        cout << base << " ko power 2 = " << power(base) << endl;
    }
    else
    {
        cout << base << " ko power " << exponent << " = " << power(base, exponent) << endl;
    }

    return 0;
}

