#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter text: ";
    cin.getline(str, 100);

    cout << "something " << str;

    return 0;
}