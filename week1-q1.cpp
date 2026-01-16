// Q1. Salary Calculation Using Constants and Type Conversion**
// Problem Statement
// Write a C++ program that calculates an employee’s total salary based on a base salary and a bonus percentage.

#include <iostream>
using namespace std;

int main() {
    int baseSalary;
    const float bonusPercentage = 15.0;   // constant bonus percentage

    cout << "Enter Base Salary: ";
    cin >> baseSalary;

    float bonusAmount = baseSalary * (bonusPercentage / 100);
    float totalSalary = baseSalary + bonusAmount;

    cout << "Total Salary: " << totalSalary << endl;

    return 0;
}
