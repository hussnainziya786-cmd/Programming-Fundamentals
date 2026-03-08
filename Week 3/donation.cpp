#include<iostream>
using namespace std;
main(){
    string m_name;
    int p1,p2,n_p1,n_p2,per;
    int don,tot,rem;
    cout<<"Enter the movie name: ";
    cin>>m_name;
    cout<<"Enter the adult ticket price: $";
    cin>>p1;
    cout<<"Enter the child ticket price: $";
    cin>>p2;
    cout<<"Enter the number of adult tickets sold: ";
    cin>>n_p1;
    cout<<"Enter the number of child tickets sold: ";
    cin>>n_p2;
    cout<<"Enter the percentage of amount to be denoted to charity: ";
    cin>>per;
    cout<<"--------------------------------------------";
    tot=(n_p1*p1)+(n_p2*p2);
    don=(tot*per)/100;
    rem=tot-don;
    cout<<"Movie: "<<m_name<<endl;
    cout<<"Total Amount Generated from ticket sales: $"<<tot<<endl;
    cout<<"Donation to charity("<<per<<"): $"<<don<<endl;
    cout<<"Remaining amount after donation: $"<<rem<<endl;
}