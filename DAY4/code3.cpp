// Check armstrong number
#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}
