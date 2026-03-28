#include <iostream>
using namespace std;

int main() {
    int n, arr[100];

    cout << "Enter n: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                cout << "Already Entered\n";
                break;
            }
        }
    }

    return 0;
}