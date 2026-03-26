#include<iostream>
using namespace std;
 main (){
    cout<<"enter your name : ";
    string name;
    cin>>name;
    cout<<"enter the number of times you want to print your names: "; 
     int n;
     cin>>n;
     for(int i = 0 ; i < n; i = i + 1 ){
        cout<<i + 1<<" "<<name<<endl;
     }
    }