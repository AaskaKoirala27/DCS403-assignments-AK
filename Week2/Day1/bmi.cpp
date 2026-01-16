// Write a C++ program that calculates a person’s Body Mass Index (BMI) based on their weight and height, and then classifies the BMI according to standard health categories.


#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Tapaiko weight halnus (kg): ";
    cin >> weight;

    cout << "Tapaiko height halnus (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Hajurko BMI is: " << bmi << endl;

    if (bmi < 18.5)
        cout << "Category: Underweight (ali khana ma dhyan dinu hoos)" << endl;
    else if (bmi < 25)
        cout << "Category: Normal weight (good)" << endl;
    else if (bmi < 30)
        cout << "Category: Overweight (ali kam khana ma dhyan dinu hoos)" << endl;
    else
        cout << "Category: Obesity (danger: dherai khana ma dhyan nadinu hoos)" << endl;

    return 0;
}
