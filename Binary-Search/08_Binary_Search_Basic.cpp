// Binary Search requires a sorted array.
#include <iostream>
using namespace std;
int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int target, low = 0, high = 6, found = -1;

    cout << "Enter value to search: ";
    cin >> target;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) { found = mid; break; }
        else if (target > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }

    if (found != -1) cout << "Element found at index: " << found << endl;
    else cout << "Element not found!" << endl;
    return 0;
}