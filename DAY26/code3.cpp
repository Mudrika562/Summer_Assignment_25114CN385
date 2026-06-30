//ATM Simulation
#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Balance = " << balance;
                break;

            case 2:
                cout << "Amount: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Amount: ";
                cin >> amount;

                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance";
                break;
        }
    } while(choice != 4);

    return 0;
}