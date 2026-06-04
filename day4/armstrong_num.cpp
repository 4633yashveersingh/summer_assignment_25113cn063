#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter no: ";
    cin >> num;

    int temp = num;

    // count digits
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    temp = num; // restore original number

    int sum = 0;

    // calculate Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is an Armstrong number" << endl;
    } else {
        cout << num << " is not an Armstrong number" << endl;
    }

    return 0;
}