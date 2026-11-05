#include <iostream>
using namespace std;
int main() {
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) cin >> arr[i];

    for (int i = 1; i < 5; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}