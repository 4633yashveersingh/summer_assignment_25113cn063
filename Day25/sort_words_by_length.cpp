#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore();
 
    char words[50][50];
    cout << "Enter " << n << " words:" << endl;
    for (int i = 0; i < n; i++) {
        cin.getline(words[i], 50);
    }
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                char temp[50];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
 
    cout << "Words sorted by length:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
 
    return 0;
}