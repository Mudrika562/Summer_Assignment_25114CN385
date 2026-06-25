//Common Characters
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    cout << "Common characters: ";

    for (char ch : s1) {
        if (s2.find(ch) != string::npos)
            cout << ch << " ";
    }

    return 0;
}