//Remove Duplicate
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter string: ";
    cin >> str;

    for (char ch : str) {
        if (result.find(ch) == string::npos)
            result += ch;
    }

    cout << "After removing duplicates: " << result;

    return 0;
}