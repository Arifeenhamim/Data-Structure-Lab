#include <iostream>
using namespace std;
int main() {
    int rows, cols, matrix[10][10];
    cout << "Enter rows and columns: "; cin >> rows >> cols;
    if (rows<1 || rows>10 || cols<1 || cols>10) return 0;
    cout << "Enter matrix elements:\n";
    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++) cin >> matrix[i][j];
    cout << "Matrix:\n";
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}