#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    if (n <= 0) return 0;

    int* ids = new int[n];
    cout << "Enter student IDs: ";
    for (int i = 0; i < n; i++) cin >> ids[i];

    int target, found = -1, comparisons = 0;
    cout << "Enter ID to search: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (ids[i] == target) { found = i; break; }
    }

    if (found != -1) {
        cout << "Student ID Found!\nPosition: " << found + 1 << endl;
    } else cout << "Student ID Not Found!" << endl;

    cout << "Total Comparisons: " << comparisons << endl;
    delete[] ids;
    return 0;
}