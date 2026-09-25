#include<iostream>
using namespace std;

int main(){
    int n , i ;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(i=(n/2);i>=1;i--){
        if(n%i==0){
            break;
        }
    }
    if(i==1){
        cout<<"Prime Number.";
    }
    else{
        cout<<"Composite Number.";
    }
    
}