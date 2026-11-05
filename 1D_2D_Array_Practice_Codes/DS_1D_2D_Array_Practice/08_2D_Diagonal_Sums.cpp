#include <iostream>
using namespace std;
int main() {
    int n, a[10][10], mainSum=0, secondarySum=0;
    cout << "Enter square matrix order: "; cin >> n;
    if (n<1 || n>10) return 0;
    cout << "Enter matrix elements:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++) cin >> a[i][j];
    for (int i=0; i<n; i++) {
        mainSum += a[i][i];
        secondarySum += a[i][n-1-i];
    }
    cout << "Main diagonal sum: " << mainSum << endl;
    cout << "Secondary diagonal sum: " << secondarySum << endl;
    return 0;
}