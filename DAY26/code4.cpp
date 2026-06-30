//Quiz Application
#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "1. Capital of India?\n";
    cout << "1.Delhi 2.Mumbai 3.Kolkata\n";
    cin >> ans;
    if(ans == 1) score++;

    cout << "2. 2 + 2 = ?\n";
    cout << "1.3 2.4 3.5\n";
    cin >> ans;
    if(ans == 2) score++;

    cout << "Score = " << score;
    return 0;
}