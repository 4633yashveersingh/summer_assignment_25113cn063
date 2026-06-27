#include <iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();
 
    int empId[50];
    char names[50][50];
    double salary[50];
 
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> empId[i];
        cin.ignore();
        cout << "Name: ";
        cin.getline(names[i], 50);
        cout << "Salary: ";
        cin >> salary[i];
        cin.ignore();
    }
 
    cout << "\n----- Employee Records -----" << endl;
    cout << "ID\tName\t\tSalary" << endl;
    for (int i = 0; i < n; i++) {
        cout << empId[i] << "\t" << names[i] << "\t\t" << salary[i] << endl;
    }
 
    return 0;
}
