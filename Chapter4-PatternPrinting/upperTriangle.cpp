#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cout<<"Enter the height of triangle: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=(n+1-i);j>=1;j--){
            cout<<"*  ";
        }
        cout<<endl; 
    }
}