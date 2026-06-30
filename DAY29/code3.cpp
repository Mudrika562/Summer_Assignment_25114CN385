//Menu-Driven String Operations
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int choice;

    cout << "Enter String: ";
    cin.getline(str, 100);

    do {
        cout << "\n1.Length";
        cout << "\n2.Uppercase";
        cout << "\n3.Reverse";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Length = " << strlen(str);
                break;

            case 2:
                for(int i = 0; str[i] != '\0'; i++)
                    cout << (char)toupper(str[i]);
                break;

            case 3:
                for(int i = strlen(str)-1; i >= 0; i--)
                    cout << str[i];
                break;
        }

    } while(choice != 4);

    return 0;
}