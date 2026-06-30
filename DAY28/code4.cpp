//Contact Management System
#include <iostream>
using namespace std;

class Contact {
public:
    string name;
    string phone;

    void input() {
        cin >> name >> phone;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nPhone: " << phone;
    }
};

int main() {
    Contact c;

    cout << "Enter Name and Phone:\n";
    c.input();

    c.display();

    return 0;
}