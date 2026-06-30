//Employee Management System
#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void input() {
        cin >> id >> name >> salary;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
};

int main() {
    Employee e;

    cout << "Enter ID Name Salary:\n";
    e.input();

    e.display();

    return 0;
}