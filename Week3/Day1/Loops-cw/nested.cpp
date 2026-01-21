// print a 3×3 multiplication table using nested for loops.
#include <iostream>
using namespace std;
int main() {

for (int i = 1; i <= 3; i++){        // outer loop give you number of rows
    for (int j = 1; j <= 3; j++){   // inner loop gives you number of columns
        cout << i * j << "\t";
    }
    cout << endl;
} 
return 0; 
} 