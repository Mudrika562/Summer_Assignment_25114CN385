//Array intersection
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int arr1[100], arr2[100];

    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;

    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i < n1; i++) {

        bool printed = false;

        for(int k = 0; k < i; k++) {
            if(arr1[k] == arr1[i]) {
                printed = true;
                break;
            }
        }

        if(printed)
            continue;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}