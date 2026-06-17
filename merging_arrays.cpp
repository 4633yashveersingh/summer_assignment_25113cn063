#include <iostream>
using namespace std;

int main() {

    int n = 4 ; // size of array a
    int m = 4 ; // size of array b

    int a[n] = {1, 3, 5, 7};
    int b[m] = {2, 4, 6, 8};

     int c[8]; // tisri array jaha merged array store hogi

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }
      // jab loop end hojyega aur koi element reh gya in case these loops will work .
    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "Merged array: ";
    for (int i = 0; i < (n + m); i++) {
        cout << c[i] << " ";
    }

    return 0;
}
