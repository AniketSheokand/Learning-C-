#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
    if(x%5==0){
        cout<<"Yay!"<<endl;
        cout<<"Your Number is Divisble by 5";
    }
    else{
        cout<<"Oh no..."<<endl;
        cout<<"Your Number is NOT Divisble by 5";
    }
}