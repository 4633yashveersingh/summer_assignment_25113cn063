#include <iostream>
using namespace std;

int main()
{
    // Total number of books
    int totalBooks = 5;

    // Array to store book names
    string books[5] = {
        "C++ Basics",
        "Data Structures",
        "Operating Systems",
        "DBMS Concepts",
        "Computer Networks"
    };

    // true = Available
    // false = Issued
    bool available[5] = {true, true, true, true, true};

    int choice;

    while (choice != 4)
    {
        cout << "\n====== LIBRARY MENU ======\n";
        cout << "1. View Books\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // View Books
        if (choice == 1)
        {
            cout << "\nList of Books\n";

            for (int i = 0; i < totalBooks; i++)
            {
                cout << i + 1 << ". " << books[i] << " - ";

                if (available[i] == true)
                {
                    cout << "Available";
                }
                else
                {
                    cout << "Issued";
                }

                cout << endl;
            }
        }

        // Issue Book
        else if (choice == 2)
        {
            int number;

            cout << "Enter Book Number: ";
            cin >> number;

            number = number - 1;

            if (number >= 0 && number < totalBooks)
            {
                if (available[number] == true)
                {
                    available[number] = false;
                    cout << "Book Issued Successfully.\n";
                }
                else
                {
                    cout << "Book is already issued.\n";
                }
            }
            else
            {
                cout << "Invalid Book Number.\n";
            }
        }

        // Return Book
        else if (choice == 3)
        {
            int number;

            cout << "Enter Book Number: ";
            cin >> number;

            number = number - 1;

            if (number >= 0 && number < totalBooks)
            {
                if (available[number] == false)
                {
                    available[number] = true;
                    cout << "Book Returned Successfully.\n";
                }
                else
                {
                    cout << "This book was not issued.\n";
                }
            }
            else
            {
                cout << "Invalid Book Number.\n";
            }
        }

        else if (choice == 4)
        {
            cout << "Thank You! Exiting Library System.\n";
        }

        else
        {
            cout << "Invalid Choice.\n";
        }
    }

    return 0;
}