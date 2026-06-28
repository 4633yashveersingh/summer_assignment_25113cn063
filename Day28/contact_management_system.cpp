#include <iostream>
using namespace std;
 
int main() {
    const int maxContacts = 100;
    string names[maxContacts];
    string phoneNumbers[maxContacts];
    int contactCount = 0;
 
    int choice;
 
    do {
        cout << "\n----- Contact Management System -----" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. View Contacts" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
 
        if (choice == 1) {
            if (contactCount < maxContacts) {
                cout << "Enter name: ";
                getline(cin, names[contactCount]);
                cout << "Enter phone number: ";
                getline(cin, phoneNumbers[contactCount]);
                contactCount++;
                cout << "Contact added successfully!" << endl;
            } else {
                cout << "Contact list is full." << endl;
            }
        } else if (choice == 2) {
            cout << "\n----- All Contacts -----" << endl;
            for (int i = 0; i < contactCount; i++) {
                cout << i + 1 << ". " << names[i] << " - " << phoneNumbers[i] << endl;
            }
        }
 
    } while (choice != 3);
 
    cout << "Exiting Contact Manager." << endl;
    return 0;
}
