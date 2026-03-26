#include<iostream>
using namespace std;
main()
{
    int n1,n2;
    cout<<"enter first number ";
    cin>>n1;
    cout<<"enter second number ";
    cin>>n2;
    int hcf=n2%n1;
    int lcm=(n1*n2)/hcf;
    cout<<"hcf of "<<n1<<" and "<<n2<<" is "<<hcf<<endl;
    cout<<"lcm of "<<n1<<" and "<<n2<<" is "<<lcm;
}