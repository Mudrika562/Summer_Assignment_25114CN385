//Voting Eligibility System
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if(age >= 18)
        cout << "Eligible for Voting";
    else
        cout << "Not Eligible";

    return 0;
}