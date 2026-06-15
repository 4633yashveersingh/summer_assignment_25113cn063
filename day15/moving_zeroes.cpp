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

    int j = 0;  // woh position jaha non zero elements will go in same order

    // saare non zero element front me jayenge
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // bache places pe 0 fill krdo
    while(j < n) {
        arr[j] = 0;
        j++;
    }

    cout << "Array after moving zeros to the end:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}