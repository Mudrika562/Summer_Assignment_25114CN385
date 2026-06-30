//Inventory Management System
#include <iostream>
using namespace std;

class Item {
public:
    int id, qty;
    string name;

    void input() {
        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;

        cout << "Quantity: ";
        cin >> qty;
    }

    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nQuantity: " << qty;
    }
};

int main() {
    Item i;

    i.input();
    i.display();

    return 0;
}