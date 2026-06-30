//Student Record System Using Arrays and Strings
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    string name[50];
    int roll[50];

    for(int i = 0; i < n; i++) {
        cout << "\nRoll No: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < n; i++) {
        cout << "\nRoll: " << roll[i];
        cout << "\nName: " << name[i] << endl;
    }

    return 0;
}