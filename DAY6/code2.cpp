//Convert Binary to Decimal
#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, rem;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}