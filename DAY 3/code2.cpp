//prime numbers in a range
#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting and ending numbers: ";
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        int flag = 1;

        if (n <= 1)
            flag = 0;
        else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag)
            cout << n << " ";
    }

    return 0;
}
