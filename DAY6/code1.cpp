//Convert Decimal to Binary
#include <iostream>
using namespace std;

int main() {
    int n, binary = 0, place = 1, rem;

    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        rem = n % 2;
        binary += rem * place;
        place *= 10;
        n /= 2;
    }

    cout << "Binary = " << binary;

    return 0;
}