#include<iostream>
using namespace std;
main(){
    float p_v,p_f;
    int tot_v,tot_f,tot;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>p_v;
    cout<<"Enter fruit price per kilogram (in coins): ";
    cin>>p_f;
    cout<<"Enter total kilograms of vegetables: ";
    cin>>tot_v;
    cout<<"Enter total kilograms of fruits: ";
    cin>>tot_f;
    tot=(p_v*tot_v)+(p_f*tot_f);
    cout<<"Total earnings in Rupees (Rps): "<<tot;
}
    