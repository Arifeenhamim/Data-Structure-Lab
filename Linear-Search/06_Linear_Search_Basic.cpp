#include <iostream>
using namespace std;
int main() {
    int arr[6] = {10, 25, 30, 45, 50, 65};
    int target, found = -1;
    cout << "Enter value to search: ";
    cin >> target;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1) cout << "Element found at index: " << found << endl;
    else cout << "Element not found!" << endl;
    return 0;
}