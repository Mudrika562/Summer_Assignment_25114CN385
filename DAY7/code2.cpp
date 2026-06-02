//Recursive Fibonacci
#include <iostream>
using namespace std;

long long fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Enter position: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Fibonacci is not defined for negative positions.";
    }
    else
    {
        cout << "Fibonacci number = " << fibonacci(n);
    }

    return 0;
}