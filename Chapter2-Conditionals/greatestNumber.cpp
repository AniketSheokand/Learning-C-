#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    cout<<"Enter your 1st number: ";
    cin>>a;
    cout<<"Enter your 2nd number: ";
    cin>>b;
    cout<<"Enter your 3rd number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"The greatest number is "<<a;
    }
    else if(b>a && b>c){
        cout<<"The greatest number is "<<b;
    }
    else{
        cout<<"The greatest number is "<<c;
    }
}