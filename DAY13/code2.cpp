//Sum and Average of Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}