// Sum of First N Natural Numbers (Using `for` loop)
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Euta number halnu hos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "1 dekhi " << n << " samma ko sum: " << sum << endl;

    return 0;
}
