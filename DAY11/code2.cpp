//Function to Find Maximum
#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if(a > b)
        return a;
    return b;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << findMax(a, b);

    return 0;
}