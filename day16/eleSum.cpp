#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the required sum: ";
    cin >> target;

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Elements are: "
                 << arr[left] << " and " << arr[right] << endl;
            break;
        }

        else if (sum < target) {
            left++;       // increase sum
        }

        else {
            right--;      // decrease sum
        }
    }

    return 0;
}