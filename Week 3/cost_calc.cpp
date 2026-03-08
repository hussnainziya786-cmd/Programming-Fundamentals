#include<iostream>
using namespace std;
main(){
    int size,c1,A,c2,c3;
    cout<<"Enter the size of the fertilizer bag in pounds: ";
    cin>>size;
    cout<<"Enter the cost of the bag: ";
    cin>>c1;
    cout<<"Enter the area in square feet that can be covered by the bag: ";
    cin>>A;
    c2 = c1/size;
    c3 = c1/A;
    cout<<"Cost of fertilizer per pound: $"<<c2<<endl;
    cout<<"Cost of fertilizing per square foot: $"<<c3;
}