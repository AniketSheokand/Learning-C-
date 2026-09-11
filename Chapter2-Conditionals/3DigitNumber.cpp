#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"Three digit number.";
    }
    else{
        cout<<"Not a Three Digit Number.";
    }
}