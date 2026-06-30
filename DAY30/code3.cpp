//Mini Employee Management System
#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {

    Employee e[3];

    for(int i = 0; i < 3; i++) {
        cout << "\nEnter ID Name Salary: ";
        cin >> e[i].id >> e[i].name >> e[i].salary;
    }

    cout << "\nEmployee Details\n";

    for(int i = 0; i < 3; i++) {
        cout << "\nID: " << e[i].id;
        cout << "\nName: " << e[i].name;
        cout << "\nSalary: " << e[i].salary << endl;
    }

    return 0;
}