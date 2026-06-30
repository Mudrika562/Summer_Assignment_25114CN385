//Number guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1, guess;

    do {
        cout << "Enter guess (1-100): ";
        cin >> guess;

        if (guess > num)
            cout << "Too High\n";
        else if (guess < num)
            cout << "Too Low\n";
        else
            cout << "Correct!\n";

    } while (guess != num);

    return 0;
}