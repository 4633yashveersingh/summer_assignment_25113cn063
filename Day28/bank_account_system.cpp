#include <iostream>
using namespace std;
 
int main() {
    double balance = 0.0;
    int choice;
 
    cout << "Welcome to Simple Bank Account System" << endl;
 
    do {
        cout << "\n----- Bank Menu -----" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
 
        if (choice == 1) {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance = balance + amount;
                cout << "Deposited successfully." << endl;
            } else {
                cout << "Invalid amount." << endl;
            }
        } else if (choice == 2) {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Insufficient balance." << endl;
            } else if (amount <= 0) {
                cout << "Invalid amount." << endl;
            } else {
                balance = balance - amount;
                cout << "Withdrawal successful." << endl;
            }
        } else if (choice == 3) {
            cout << "Current balance: " << balance << endl;
        }
 
    } while (choice != 4);
 
    cout << "Thank you for banking with us!" << endl;
    return 0;
}
