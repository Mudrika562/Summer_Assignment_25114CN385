//Menu-Driven Calculator
#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "\n1.Add";
        cout << "\n2.Subtract";
        cout << "\n3.Multiply";
        cout << "\n4.Divide";
        cout << "\n5.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter Two Numbers: ";
            cin >> a >> b;
        }

        switch(choice) {
            case 1:
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Result = " << a * b;
                break;

            case 4:
                if(b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division by Zero Not Allowed";
                break;
        }

    } while(choice != 5);

    return 0;
}