#include<iostream>
using namespace std;
int main(){
    int j;
    cout<<"Enter the number of elements : ";
    cin>>j;
    int arr[j];
    cout<<"Enter "<< j <<" numbers : "<<endl;
    for(int i=0;i<j;i++){
        cin>>arr[i];
    }
    int largerst_n=arr[0];
    int smallest_n=arr[0];
    for(int i=0;i<j;i++){
        if(arr[i]>largerst_n){
            largerst_n = arr[i];
        }
        else{
            smallest_n=arr[i];
        }
    }
    cout<<"Largest Number : "<<largerst_n<<endl;
    cout<<"Smallest Number : "<<smallest_n;
    return 0;
}