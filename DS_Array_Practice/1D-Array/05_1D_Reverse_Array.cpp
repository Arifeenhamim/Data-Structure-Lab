#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    cout << "Enter array size: "; cin >> n;
    if (n < 1 || n > 100) return 0;
    cout << "Enter elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];
    int left=0, right=n-1;
    while (left < right) {
        int temp=arr[left]; arr[left]=arr[right]; arr[right]=temp;
        left++; right--;
    }
    cout << "Reversed array: ";
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}