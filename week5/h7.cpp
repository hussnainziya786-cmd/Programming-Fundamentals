#include<iostream>
using namespace std;
main()
{
int multiple;
    int num;
    cout<<"enter a number: ";
    cin>>num;
   for(int number=1; number<=10; number =number+1)
    {
      multiple = num * number;
      cout<<num<<"*"<<number<<"="<<multiple<<endl;
    
    }
   }