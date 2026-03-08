#include<iostream>
using namespace std;
main(){
    float V,A,P;
    cout<<"Enrer Voltage (in volts) : ";
    cin>>V;
    cout<<" Enter Current (in Amperes): ";
    cin>> A;
    P= V*A;
    cout<<" The power is : "<<P;
}