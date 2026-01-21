//using do while sum of numbers from 1 to n
#include <iostream>
using namespace std;
int main() {
    int n;          
    cout << "Euta number halnu hos (n): ";
    cin >> n;   
    int sum = 0;
    int i = 1;
    do {
        sum = sum + i;
        i++;
    } while (i <= n);   
    cout << "1 dekhi " << n << " samma ko jod (sum) ho: " << sum << endl;
    return 0;
} 