#include <iostream>
using namespace std;

int main() {
    int q, d, n, p;
    float total, money;

    cout << "Enter quarters, dimes, nickels, pennies: ";
    cin >> q >> d >> n >> p;

    cout << "Enter total bill: ";
    cin >> total;

    money = q*0.25 + d*0.10 + n*0.05 + p*0.01;

    if(money >= total)
        cout << "true";
    else
        cout << "false";

    return 0;
}