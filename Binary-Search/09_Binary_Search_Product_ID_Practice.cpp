#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    if (n <= 0) return 0;

    int* ids = new int[n];
    cout << "Enter product IDs in ascending order: ";
    for (int i = 0; i < n; i++) cin >> ids[i];

    for (int i = 1; i < n; i++) {
        if (ids[i] < ids[i - 1]) {
            cout << "Product IDs must be in ascending order." << endl;
            delete[] ids;
            return 0;
        }
    }

    int target, low = 0, high = n - 1, found = -1, comparisons = 0;
    cout << "Enter product ID to search: ";
    cin >> target;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons++;
        if (ids[mid] == target) { found = mid; break; }
        else if (target > ids[mid]) low = mid + 1;
        else high = mid - 1;
    }

    if (found != -1) {
        cout << "Product ID Found!\nPosition: " << found + 1 << endl;
    } else cout << "Product ID Not Found!" << endl;

    cout << "Total Comparisons: " << comparisons << endl;
    delete[] ids;
    return 0;
}