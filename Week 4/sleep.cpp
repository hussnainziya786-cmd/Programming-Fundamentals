#include<iostream>
using namespace std;
int main(){
int holidays,working_days;
cout<<"Enter the number of holidays: ";
cin>>holidays;  
working_days= 365-holidays;
int mints_played1= holidays*127;
int mints_played2= working_days*63;
int total_mints= mints_played1+mints_played2;
int mints_diff= 30000-total_mints;
int hours= mints_diff/60;
int mints= mints_diff%60;
if (total_mints < 30000){
    cout<<"Tom sleeps well"<<endl;
    cout<<"Tom will sleep for "<<hours<<" hours and "<<mints<<" minutes less for playing";
}
else if (total_mints > 30000){
    cout<<"Tom will run away"<<endl;
    cout<<"Tom will sleep for "<<hours<<" hours and "<<mints<<" minutes more for playing";
}
else if (total_mints == 30000){
    cout<<"Tom sleeps just fine";
    return 0;
}

















}