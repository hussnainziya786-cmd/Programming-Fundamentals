#include<iostream>
using namespace std;
main() { 
    int M_mark, I_mark, ecat;
    float agg;
    string name;
    cout << "Enter the student's name : ";
    cin >> name;
    cout << "Enter Matric marks (out of 1100): ";
    cin >> M_mark;
    cout << "Enter Inter marks (out of 550): ";
    cin >> I_mark;
    cout << "Enter ECAT marks (out of 400) : ";
    cin >> ecat;
    agg = (M_mark / 1100.0 * 10) + (I_mark / 550.0 * 40) + (ecat / 400.0 * 50);
    cout << "Aggregate score for " << name << " is: " << agg << endl;
    
}