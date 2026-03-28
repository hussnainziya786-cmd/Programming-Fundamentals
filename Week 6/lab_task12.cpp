#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool isSpecial = true;

    for(int i = 0; i < n; i++){
        
        if(i % 2 == 0){
            if(arr[i] % 2 != 0){  
                isSpecial = false;
            }
        }
        
        else{
            if(arr[i] % 2 == 0){   
                isSpecial = false;
            }
        }
    }

    if(isSpecial){
        cout << "The array is special";
    }
    else{
        cout << "The array is not special";
    }

    return 0;
}