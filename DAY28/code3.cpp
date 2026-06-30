//Ticket Booking System
#include <iostream>
using namespace std;

int main() {
    int seats = 50, book;

    cout << "Available Seats = " << seats;

    cout << "\nEnter seats to book: ";
    cin >> book;

    if(book <= seats) {
        seats -= book;
        cout << "Booked Successfully";
    }
    else {
        cout << "Not Available";
    }

    return 0;
}