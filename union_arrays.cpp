#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;
    int result[20];
    int k = 0;

    // Copy first array
    for(int i = 0; i < n1; i++) {
        result[k++] = a[i]; // naye array mei copy hora , k++ increment show kr rha
    }

    // Add unique elements from second array
    for(int i = 0; i < n2; i++) {
        bool found = false;

        for(int j = 0; j < k; j++) {
            if(b[i] == result[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            result[k++] = b[i];
        }
    }

    cout << "Union: ";
    for(int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }

    return 0;
}