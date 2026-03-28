#include<iostream>
#include<string>
using namespace std;
int main(){
    string names[6];
    cout<<"Enter names of 5 students : "<<endl;
    for(int i=0; i<5;i++){
        getline(cin,names[i]);
    }
    cout<<"Students Names are : "<<endl;
    for(int i=0;i<5;i++){
       cout<<names[i];
       cout<<endl;
    }
    return 0;
}