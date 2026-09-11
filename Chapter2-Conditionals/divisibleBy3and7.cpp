#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
    if(x%3==0 && x%7==0){
        cout<<"Your Number is Divisble by 3 and 7";
    }
    else{
        cout<<"Your Number is NOT Divisble by 3 and 7";
    }
}