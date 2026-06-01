// Factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial not defined for negative numbers.";
    }
    else
    {
        do
        {
            fact = fact * i;
            i++;
        }
        while (i <= n);

        cout << "Factorial = " << fact;
    }

    return 0;
}
