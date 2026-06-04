//Zeroes to End
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int temp[100];
    int index = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    while(index < n) {
        temp[index++] = 0;
    }

    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}