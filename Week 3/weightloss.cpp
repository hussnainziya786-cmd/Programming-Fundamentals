#include<iostream>
using namespace std;
main(){
    int tar,sum;
    string name;
    cout<<"Enter the Name of the Person: ";
    cin>>name;
    cout<<"Enter the target weight loss in Kilograms: ";
    cin>>tar;
    sum = tar *15;
    cout<<name<<" will need "<<sum<<" days to lose "<<tar<<" kg of weight by following the doctor's suggestions ";
} 