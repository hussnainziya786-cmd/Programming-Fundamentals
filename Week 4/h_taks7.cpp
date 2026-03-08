#include<iostream>
using namespace std;

int main(){

    string shapes;
    cin>>shapes;

    if(shapes == "square"){
        int s;
        cin>>s;
        cout<<s*s;
    }

    if(shapes == "rectangle"){
        int l,w;
        cin>>l;
        cin>>w;
        cout<<l*w;
    }

    if (shapes == "circle"){
        float pi = 22.0/7;
        int r;
        cin>>r;
        float A = pi*(r*r);
        cout<<A;
    }

    if (shapes == "triangle"){
        float b,h;
        cin>>b;
        cin>>h;
        float A = 0.5*b*h;
        cout<<A;
    }

    return 0;
}