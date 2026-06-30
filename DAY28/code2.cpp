//Bank Account System
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account() {
        balance = 0;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void show() {
        cout << "Balance = " << balance;
    }
};

int main() {
    Account a;

    a.deposit(5000);
    a.show();

    return 0;
}