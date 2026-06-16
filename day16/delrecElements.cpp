#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

                // Shift elements to the left
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }

                n--;   // Reduce array size
                j--;   // Check the new element at this position
            }
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}