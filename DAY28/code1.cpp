//Library Management System
#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;

    void input() {
        cin >> id >> title;
    }

    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
    }
};

int main() {
    Book b;

    cout << "Enter Book ID and Title:\n";
    b.input();

    b.display();

    return 0;
}