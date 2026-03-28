#include <iostream>
using namespace std;

int main() {
    char str[50];

    cout << "Enter string: ";
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'z')
            str[i] = 'a';
        else
            str[i] = str[i] + 1;
    }

    cout << str;

    return 0;
}