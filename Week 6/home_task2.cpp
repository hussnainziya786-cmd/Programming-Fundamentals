#include<iostream>
using namespace std;
int main(){
    int j;
    cout<<"Enter the number of elements : ";
    cin>>j;
    int arr[j];
    cout<<"Enter "<<j<<" numbers : "<<endl;
    for(int i =0;i<j;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i =0;i<j;i++){
        if (arr[i]%2 == 0){
          count = count +1;
        }
    }
    cout<<"Total Even Numbers : "<< count<<endl;
    


}