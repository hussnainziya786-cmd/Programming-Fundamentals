#include<iostream>
using namespace std;
int main(){
    float disc_1,disc_2;
    int bill;
    cout<<"Enter your bill : ";
    cin>>bill;
    if(bill <= 5000){
        disc_1=5000*0.05;
        int bill_1=bill-disc_1;
        cout<<"Your discounted bill is : "<<bill_1;
    }
    else{
        disc_2 = 5000*0.1;
        int bill_2 = bill-disc_2;
        cout<<"Your discounted bill is : "<<bill_2;
    }
}