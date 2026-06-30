//Salary Management System
#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, gross;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;

    gross = basic + hra + da;

    cout << "Gross Salary = " << gross;

    return 0;
}