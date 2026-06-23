//Anagram
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Not Anagrams";
        return 0;
    }

    int freq[256] = {0};

    for (char ch : str1)
        freq[ch]++;

    for (char ch : str2)
        freq[ch]--;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagrams";
            return 0;
        }
    }

    cout << "Anagrams";
    return 0;
}