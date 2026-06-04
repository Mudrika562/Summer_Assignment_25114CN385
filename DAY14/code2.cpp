//Frequency of an Element
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    cout << count;

    return 0;
}