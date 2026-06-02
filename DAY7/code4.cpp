//Recursive Reverse Number
#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0)
{
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Reverse = -" << reverseNumber(-n);
    }
    else
    {
        cout << "Reverse = " << reverseNumber(n);
    }

    return 0;
}