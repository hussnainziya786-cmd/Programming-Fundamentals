#include<iostream>
using namespace std;
main(){
    int time_m,fps,sum;
    cout<<"Enter minutes: ";
    cin>>time_m;
    cout<<"Enter fps: ";
    cin>>fps; 
    sum=time_m*60*fps;
    cout<<"Total frames = "<<sum;
}