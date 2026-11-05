#include <iostream>
using namespace std;
int main() {
    int r, c, a[10][10];
    cout << "Enter rows and columns: "; cin >> r >> c;
    if (r<1 || r>10 || c<1 || c>10) return 0;
    cout << "Enter matrix elements:\n";
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) cin >> a[i][j];
    for (int i=0; i<r; i++) {
        int sum=0;
        for (int j=0; j<c; j++) sum += a[i][j];
        cout << "Row " << i+1 << " sum: " << sum << endl;
    }
    for (int j=0; j<c; j++) {
        int sum=0;
        for (int i=0; i<r; i++) sum += a[i][j];
        cout << "Column " << j+1 << " sum: " << sum << endl;
    }
    return 0;
}