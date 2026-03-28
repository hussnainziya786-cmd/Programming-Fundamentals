#include <iostream>
using namespace std;

int main() {
    int n;
    float arr[100], sum = 0;

    cout << "Enter number of resistors: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Total Resistance: " << sum;

    return 0;
}