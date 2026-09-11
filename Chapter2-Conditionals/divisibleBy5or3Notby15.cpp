#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter your number: ";
    cin>>x;
    if((x%5==0 || x%3==0) && (x%15!=0)){
        cout<<"The number is divisble by either 5 or 3 but not divisible by 15.";
    }
    else{
        cout<<"The number is either not divisble 5 or 3, or divisble by 15.";
    }
}