//Restaurant order system
#include <iostream>
#include <iomanip>
using namespace std;

string food[5] = {"Pizza", "Burger", "Pasta", "Sandwich", "Cold Drink"};
int price[5] = {250, 120, 180, 100, 50};

int quantity[5] = {0, 0, 0, 0, 0};

void showMenu()
{
    cout << "\n------ RESTAURANT MENU ------\n";

    for(int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". "
             << setw(12) << left << food[i]
             << " Rs." << price[i] << endl;
    }
}

void placeOrder()
{
    int item, qty;

    showMenu();

    cout << "\nEnter Item Number: ";
    cin >> item;

    if(item < 1 || item > 5)
    {
        cout << "Invalid Item!\n";
        return;
    }

    cout << "Enter Quantity: ";
    cin >> qty;

    quantity[item - 1] += qty;

    cout << "Order Added Successfully!\n";
}

void generateBill()
{
    int total = 0;

    cout << "\n----------- BILL -----------\n";
    cout << "Item\t\tQty\tAmount\n";

    for(int i = 0; i < 5; i++)
    {
        if(quantity[i] > 0)
        {
            int amount = quantity[i] * price[i];

            cout << food[i]
                 << "\t"
                 << quantity[i]
                 << "\t"
                 << amount
                 << endl;

            total += amount;
        }
    }

    cout << "\nTotal Bill = Rs." << total << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n\n===== RESTAURANT ORDER SYSTEM =====";
        cout << "\n1. Display Menu";
        cout << "\n2. Place Order";
        cout << "\n3. Generate Bill";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                showMenu();
                break;

            case 2:
                placeOrder();
                break;

            case 3:
                generateBill();
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}