#include <iostream>
using namespace std;

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int b[] = {30, 40, 60, 70};

    int n1 = 5, n2 = 4; // array a and b ki size

    cout << "Common Elements: ";

    for(int i = 0; i < n1; i++) {
        bool found = false; // currently abhi koi common element nahi hai

        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                found = true; // common elements were found
                break;
            }
        }

        if(found) {
            cout << a[i] << " ";
        }
    }

    return 0;
}