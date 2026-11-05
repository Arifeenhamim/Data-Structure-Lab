#include <iostream>
using namespace std;
int main() {
    int r, c, a[10][10], b[10][10], result[10][10];
    cout << "Enter rows and columns: "; cin >> r >> c;
    if (r<1 || r>10 || c<1 || c>10) return 0;
    cout << "Enter first matrix:\n";
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) cin >> a[i][j];
    cout << "Enter second matrix:\n";
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) cin >> b[i][j];
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) result[i][j]=a[i][j]+b[i][j];
    cout << "Sum matrix:\n";
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;
}