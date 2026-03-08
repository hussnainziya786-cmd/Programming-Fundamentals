#include<iostream>
using namespace std;
main(){
    int i,p,ch;
    cout<<" Enter imposters: ";
    cin>>i;
    cout<<" Enter players: ";
    cin>>p;
    ch=100*(i/p);
    cout<<" Chance= "<<ch<<"%";
}