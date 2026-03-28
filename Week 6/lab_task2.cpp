#include <iostream>
using namespace std;

int main() {
    char str[50];
    int len = 0;

    cout << "Enter string: ";
    cin >> str;

    while(str[len] != '\0') {
        len++;
    }

    for(int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}