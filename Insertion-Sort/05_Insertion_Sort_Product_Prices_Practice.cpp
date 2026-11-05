#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    if (n <= 0) return 0;

    double* price = new double[n];
    double sum = 0;
    cout << "Enter product prices: ";
    for (int i = 0; i < n; i++) {
        cin >> price[i];
        if (price[i] < 0) {
            cout << "Price cannot be negative.";
            delete[] price;
            return 0;
        }
        sum += price[i];
    }

    for (int i = 1; i < n; i++) {
        double key = price[i];
        int j = i - 1;
        while (j >= 0 && price[j] > key) {
            price[j + 1] = price[j];
            j--;
        }
        price[j + 1] = key;
    }

    cout << fixed << setprecision(2);
    cout << "Sorted Product Prices: ";
    for (int i = 0; i < n; i++) cout << price[i] << " ";
    int below = 0;
    for (int i = 0; i < n; i++) if (price[i] < 500) below++;

    cout << "\nCheapest Price: " << price[0];
    cout << "\nMost Expensive Price: " << price[n - 1];
    cout << "\nAverage Price: " << sum / n;
    cout << "\nProducts Below 500: " << below;

    int second = -1;
    for (int i = 1; i < n; i++)
        if (price[i] != price[0]) { second = i; break; }

    if (second == -1) cout << "\nNo second-cheapest distinct price exists.";
    else cout << "\nSecond-Cheapest Distinct Price: " << price[second];
    cout << endl;
    delete[] price;
    return 0;
}