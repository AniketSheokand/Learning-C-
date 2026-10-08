#include<iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout<<"Enter number of ascii values: ";
    cin>>n;
    while(i<=n){
        cout<< i<<" = "<<char(i)<<endl;
        i++;
    }
}