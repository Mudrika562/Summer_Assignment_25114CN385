//Menu-Driven Array Operations
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;

    cout << "Enter Size: ";
    cin >> n;

    cout << "Enter Elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n1.Display";
        cout << "\n2.Sum";
        cout << "\n3.Largest";
        cout << "\n4.Exit";
        cout << "\nChoice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                for(int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                break;

            case 2: {
                int sum = 0;
                for(int i = 0; i < n; i++)
                    sum += arr[i];

                cout << "Sum = " << sum;
                break;
            }

            case 3: {
                int max = arr[0];

                for(int i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];

                cout << "Largest = " << max;
                break;
            }
        }

    } while(choice != 4);

    return 0;
}