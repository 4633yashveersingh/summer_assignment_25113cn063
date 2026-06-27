#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();
 
    int rollNo[50];
    char names[50][50];
    float marks[50];
 
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Roll Number: ";
        cin >> rollNo[i];
        cin.ignore();
        cout << "Name: ";
        cin.getline(names[i], 50);
        cout << "Marks: ";
        cin >> marks[i];
        cin.ignore();
    }
 
    cout << "\n----- Student Records -----" << endl;
    cout << "Roll No\tName\t\tMarks" << endl;
    for (int i = 0; i < n; i++) {
        cout << rollNo[i] << "\t" << names[i] << "\t\t" << marks[i] << endl;
    }
 
    return 0;
}
