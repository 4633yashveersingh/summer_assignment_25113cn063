#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = 3;   // rotate left by 3 places

    for(int j = 0; j < k; j++) {
        int first = arr[0];

        // Shift elements left
        for(int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Place first element at last
        arr[n - 1] = first;
    }

    cout << "Array after left rotation by 3 places:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}