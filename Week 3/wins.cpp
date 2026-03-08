#include<iostream>
using namespace std;
main(){ 
    int wins,draw,loss,total;
    cout<<"Enter the number of wins : ";
    cin>>wins;
    cout<<"Enter the number of draws : ";
    cin>>draw;
    cout<<"Enter the number of losses :";
    cin>>loss;
    total = (wins*3)+(draw*1)+(loss*0);
    cout<<"Pakistan has obtained "<<total<<"in Asia Cup Tournament";
}