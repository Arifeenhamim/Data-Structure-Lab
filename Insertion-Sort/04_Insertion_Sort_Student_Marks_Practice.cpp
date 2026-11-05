#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    if (n <= 0) return 0;

    int* marks = new int[n];
    int sum = 0, passed = 0;
    cout << "Enter marks (0-100): ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid mark.";
            delete[] marks;
            return 0;
        }
        sum += marks[i];
    }

    for (int i = 1; i < n; i++) {
        int key = marks[i], j = i - 1;
        while (j >= 0 && marks[j] > key) {
            marks[j + 1] = marks[j];
            j--;
        }
        marks[j + 1] = key;
    }

    cout << "Sorted Marks: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
        if (marks[i] >= 40) passed++;
    }
    cout << "\nHighest Mark: " << marks[n - 1];
    cout << "\nLowest Mark: " << marks[0];
    cout << "\nAverage Mark: " << fixed << setprecision(2) << (double)sum / n;
    cout << "\nNumber of Passed Students: " << passed;

    int second = -1;
    for (int i = n - 2; i >= 0; i--)
        if (marks[i] != marks[n - 1]) { second = marks[i]; break; }

    if (second == -1) cout << "\nNo second-highest distinct mark exists.";
    else cout << "\nSecond-Highest Distinct Mark: " << second;
    cout << endl;
    delete[] marks;
    return 0;
}