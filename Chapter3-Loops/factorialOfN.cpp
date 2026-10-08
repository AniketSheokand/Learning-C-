#include<iostream>
using namespace std;

int main(){
    int num , factorial = 1;
    cout<<"Enter Your Number: ";
    cin>>num;
    while(num>0){
        factorial *= num;
        num--;
    }
    cout<<factorial;
    }