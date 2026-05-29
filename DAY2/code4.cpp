#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, reverse = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while(n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(temp == reverse) {
        cout << "Palindrome number";
    }
    else {
        cout << "Not a palindrome number";
    }

    return 0;
}