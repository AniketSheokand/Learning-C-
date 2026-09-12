#include<iostream>
using namespace std;

int main(){
    int x; 
    cout<<"Enter Your Marks(0 - 100): ";
    cin>>x;
    if(x < 0 || x > 100){
        cout << "Invalid marks. Please enter a value between 0 and 100.";
    }
    else if(x>=81 && x<=100){
        cout<<"Very Good.";
    }
    else if(x>=61){
        cout<<"Good.";
    }
    else if(x>=41){
        cout<<"Average.";
    }
    else{
        cout<<"Fail.";
    }
}