#include<iostream>
using namespace std;
int main(){
    char going;
    cout<<"Are your freinds going? (Press Y for yes): ";
    cin>>going;
    if(going == 'y'){
        cout<<"You are also going! ";

    }
    else{
        cout<<"You are not going!";
    }
}