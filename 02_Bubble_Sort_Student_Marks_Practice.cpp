#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    if (n <= 0) return 0;

    int* marks = new int[n];
    cout << "Enter marks: ";
    for (int i = 0; i < n; i++) cin >> marks[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (marks[j] > marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    cout << "Sorted Marks: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
        sum += marks[i];
    }
    cout << "\nLowest Mark: " << marks[0];
    cout << "\nHighest Mark: " << marks[n - 1];
    cout << "\nAverage Mark: " << (double)sum / n;

    int second = -1;
    for (int i = n - 2; i >= 0; i--)
        if (marks[i] != marks[n - 1]) { second = marks[i]; break; }

    if (second == -1) cout << "\nNo second-highest distinct mark.";
    else cout << "\nSecond-Highest Distinct Mark: " << second;

    cout << endl;
    delete[] marks;
    return 0;
}