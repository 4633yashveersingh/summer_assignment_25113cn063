#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]); // size of array pata kiya

    int maxFreq = 0; // intitialize kiya as 0 max frequency ko 
    int maxElement;
 // frequency find out kr rhe 
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}