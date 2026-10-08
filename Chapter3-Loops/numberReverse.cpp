#include<iostream>
using namespace std;

int main(){
    int num , mun = 0 ;
    cout<<"Enter Your Number: ";
    cin>>num;
    while(num>0){
        int a = num%10;
        mun = mun*10 + a;
        num /= 10;
    }
    cout<<mun;
    }