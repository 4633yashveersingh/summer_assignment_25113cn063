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

    int k = 3;   // rotate right by 3 places

    for(int j = 0; j < k; j++) {
        int last = arr[n - 1];
     
     // right rotating 

        for(int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        // Put last element at first position
        arr[0] = last;
    }

    cout << "Array after right rotation by 3 places:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}