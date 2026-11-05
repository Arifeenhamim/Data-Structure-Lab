#include <iostream>
using namespace std;
int main() {
    int n, arr[100], target, position=-1;
    cout << "Enter array size: "; cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter value to search: "; cin >> target;
    for (int i=0; i<n; i++)
        if (arr[i] == target) { position=i; break; }
    if (position == -1) cout << "Element not found." << endl;
    else cout << "Found at position: " << position+1 << endl;
    return 0;
}