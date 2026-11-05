#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, arr[100], sum=0;
    cout << "Enter array size: "; cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) { cin >> arr[i]; sum += arr[i]; }
    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2) << "Average: " << (double)sum/n << endl;
    return 0;
}