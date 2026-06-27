#include <iostream>
using namespace std;
 
int main() {
    const int numSubjects = 5;
    float marks[numSubjects];
    float total = 0;
 
    cout << "Enter marks for " << numSubjects << " subjects (out of 100 each):" << endl;
    for (int i = 0; i < numSubjects; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        total = total + marks[i];
    }
 
    float percentage = total / numSubjects;
 
    char grade;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 75) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }
 
    cout << "\n----- Marksheet -----" << endl;
    cout << "Total Marks: " << total << " / " << numSubjects * 100 << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
 
    return 0;
}

