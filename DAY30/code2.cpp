//Mini Library System
#include <iostream>
using namespace std;

int main() {
    string book[5] =
    {
        "C++",
        "Java",
        "Python",
        "DBMS",
        "OS"
    };

    cout << "Available Books:\n";

    for(int i = 0; i < 5; i++)
        cout << i + 1 << ". " << book[i] << endl;

    return 0;
}