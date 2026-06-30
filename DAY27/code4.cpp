//Marksheet Generation System
#include <iostream>
using namespace std;

int main() {
    float m1,m2,m3,m4,m5,total,per;

    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1+m2+m3+m4+m5;
    per = total/5;

    cout << "Total = " << total;
    cout << "\nPercentage = " << per;

    if(per >= 60)
        cout << "\nFirst Division";
    else if(per >= 45)
        cout << "\nSecond Division";
    else
        cout << "\nFail";

    return 0;
}