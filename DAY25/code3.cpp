//Sort Names Alphabetically
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of names: ";
    cin >> n;

    string names[n];

    cout << "Enter names:\n";
    for (int i = 0; i < n; i++)
        cin >> names[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (names[i] > names[j])
                swap(names[i], names[j]);
        }
    }

    cout << "\nSorted Names:\n";
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;

    return 0;
}