// using while loop sum of numbers from 1 to n

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Euta number halnu hos (n): ";
    cin >> n; 

    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum = sum+i;
        i++;
    }

    cout << "1 dekhi " << n << " samma ko jod (sum) ho: " << sum << endl;
    return 0;
}
