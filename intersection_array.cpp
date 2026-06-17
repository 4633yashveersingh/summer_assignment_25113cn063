#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;

    cout << "Intersection: ";

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}