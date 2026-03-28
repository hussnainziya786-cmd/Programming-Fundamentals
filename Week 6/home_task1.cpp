#include<iostream>
using namespace std;
int main(){
    int j;
    cout<<"Enter the number of elements you want to store :  ";
    cin>>j;
    int arr[j];
    cout<<"Enter "<<j<<" numbers :"<<endl;
    for(int i=0;i<j;i++){
       cin>>arr[i];
    }
    int sum =0;
    for(int i=0; i<j;i++){
        sum =sum + arr[i];
    }
    cout<<"Sum of all elements : "<<sum;
    return 0;
}
