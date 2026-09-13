#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
    (x>=0)?cout<<"The absolute value is "<<x:cout<<"The absolute value is "<<-x;
}