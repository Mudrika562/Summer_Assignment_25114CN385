// Armstrong numbers in a range
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        int temp = n, digit, sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}
