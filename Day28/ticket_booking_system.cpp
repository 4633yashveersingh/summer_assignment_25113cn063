#include <iostream>
using namespace std;
 
int main() {
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice;
 
    do {
        cout << "\n----- Ticket Booking System -----" << endl;
        cout << "1. Book tickets" << endl;
        cout << "2. View available seats" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
 
        if (choice == 1) {
            int numTickets;
            cout << "Enter number of tickets to book: ";
            cin >> numTickets;
 
            int availableSeats = totalSeats - bookedSeats;
            if (numTickets <= availableSeats && numTickets > 0) {
                bookedSeats = bookedSeats + numTickets;
                cout << numTickets << " ticket(s) booked successfully!" << endl;
            } else {
                cout << "Booking failed. Only " << availableSeats << " seats available." << endl;
            }
        } else if (choice == 2) {
            cout << "Available seats: " << (totalSeats - bookedSeats) << endl;
        }
 
    } while (choice != 3);
 
    cout << "Thank you for using the booking system!" << endl;
    return 0;
}
