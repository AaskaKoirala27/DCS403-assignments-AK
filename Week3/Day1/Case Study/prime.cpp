// Display all prime numbers up to a given limit.
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Euta number halnu hos (for setting limit): ";
    cin >> n;

    cout << "Prime numbers 2 dekhi " << n << " samma:\n";

    for (int num = 2; num <= n; num++) {
        int isPrime = 1; 

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
