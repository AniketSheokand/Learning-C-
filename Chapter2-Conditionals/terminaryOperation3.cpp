//Divisible by 3 and 5
#include<iostream>
using namespace std;
 
int main(){
    int x;
    cout<<"Enter Your number: ";
    cin>>x;
    (x%3==0 && x%5==0)?cout<<"The Number iS Divisible by 3 and 5.":cout<<"The Number iS NOT Divisible by 3 and 5.";
}