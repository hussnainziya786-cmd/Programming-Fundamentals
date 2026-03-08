#include<iostream>
using namespace std;
main(){
    float MB,Bytes;
    cout<<"Enter the size in megabytes (MB) : ";
    cin>>MB;
    Bytes = MB*1024*1024*8;
    cout<<MB<<" is equibalent to "<<Bytes<<"bits: " ;
}