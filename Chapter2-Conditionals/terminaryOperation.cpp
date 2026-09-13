#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
    (x>=100 && x<=999)?cout<<"Three Digit Number.":cout<<"Not a Three Digit Number.";
}