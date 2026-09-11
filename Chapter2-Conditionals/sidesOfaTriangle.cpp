//To find whether the given 3 number inputs can be sides of a triangle.
#include<iostream>
using namespace std;

int main(){
    int a , b , c;
    cout<<"Enter Your 1st Number: ";
    cin>>a;
    cout<<"Enter Your 2nd Number: ";
    cin>>b;
    cout<<"Enter Your 3rd Number: ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        cout<<"The three sides can form the three sides of a triangle.";
    }
    else{
        cout<<"The three sides can NOT form the three sides of a triangle.";
    }
}