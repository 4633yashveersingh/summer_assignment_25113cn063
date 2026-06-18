#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;

    int key = 7;

    int low = 0;
    int high = n - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Element found at index "
                 << mid << endl;
            return 0;
        }

        else if(key > arr[mid]) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}