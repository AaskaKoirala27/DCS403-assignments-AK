// randomly generate 6 diff number for a lottery simulation.
//hints: use an array to store the numbers, use a loop and rand() function to generate random numbers, generate random num from 1 to 50, use a loop to ensure all numbers are unique.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    int lottery[6];

    srand(time(0));

    for (int i = 0; i < 6; i++)
    {
        lottery[i] = rand() % 50 + 1;   // generate number 1–50

        for (int j = 0; j < i; j++)
        {
            if (lottery[i] == lottery[j])
            {
                i--;   
                break;
            }
        }
    }
    cout << "Lottery Numbers: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << lottery[i] << " ";
    }
cout << endl;
    return 0;
}
