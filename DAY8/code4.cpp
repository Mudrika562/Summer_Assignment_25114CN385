//Number Pattern
#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    if (rows <= 0)
    {
        cout << "Please enter a positive number of rows.";
        return 0;
    }

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}