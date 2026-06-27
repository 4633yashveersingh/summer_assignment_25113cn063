#include <iostream>
using namespace std;
 
int main() {
    double basicSalary;
    cout << "Enter basic salary: ";
    cin >> basicSalary;
 
    double hra = basicSalary * 0.20;       // House Rent Allowance: 20%
    double da = basicSalary * 0.10;        // Dearness Allowance: 10%
    double deductions = basicSalary * 0.05; // Deductions: 5%
 
    double netSalary = basicSalary + hra + da - deductions;
 
    cout << "\n----- Salary Slip -----" << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "HRA (20%): " << hra << endl;
    cout << "DA (10%): " << da << endl;
    cout << "Deductions (5%): " << deductions << endl;
    cout << "Net Salary: " << netSalary << endl;
 
    return 0;
}
