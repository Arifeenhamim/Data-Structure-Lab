#include <iostream>
using namespace std;
int main() {
    int r, c, a[10][10];
    cout << "Enter rows and columns: "; cin >> r >> c;
    if (r<1 || r>10 || c<1 || c>10) return 0;
    cout << "Enter matrix elements:\n";
    for (int i=0; i<r; i++)
        for (int j=0; j<c; j++) cin >> a[i][j];
    cout << "Transpose:\n";
    for (int j=0; j<c; j++) {
        for (int i=0; i<r; i++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}