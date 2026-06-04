//Function to Find Sum of Two Numbers
#include <iostream>
using namespace std;

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << findSum(a, b);

    return 0;
}