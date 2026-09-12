#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    cout<<"Enter the age of Dev: ";
    cin>>a;
    cout<<"Enter the age of Avi: ";
    cin>>b;
    cout<<"Enter the age of Adi: ";
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<"Dev is the youngest among the three.";
        }
        else{
            cout<<"Adi is the youngest among the three.";
        }
    }
    else{
        if(b<c){
            cout<<"Avi is the youngest among the three.";
        }
        else{
            cout<<"Adi is the youngest among the three.";
        }
    }
}