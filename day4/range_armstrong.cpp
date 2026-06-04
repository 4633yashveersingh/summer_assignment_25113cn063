#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers are: " << endl;

    for (int num = start; num <= end; num++) {

        int temp = num;
        int count = 0;

        // count digits
        while (temp > 0) {
            temp /= 10;
            count++;
        }

        temp = num;
        int sum = 0;

        // Armstrong check
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}