#include<iostream>
using namespace std;
main(){
    int pop,rate,tot;
    cout<<"Enter the current world population : ";
    cin>>pop;
    cout<<"Enter the monthly birth rate (number of births per month) : ";
    cin>>rate;
    tot = rate*12*30+pop;
   cout<<"Pipulation in three decades will be : "<<tot;
}