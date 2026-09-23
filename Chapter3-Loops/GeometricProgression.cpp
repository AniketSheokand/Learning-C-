#include<iostream>
using namespace std;

int main(){
    int a , r , i , n;
    
    cout<<"Enter The First Term of GP: ";
    cin>>a;
    cout<<"Enter The Common Ratio of GP: ";
    cin>>r;
    cout<<"Enter The Number of Terms: ";
    cin>>n;
    for(i=0;i<=n;i++){
        cout<<a<<" ";
        a = a*r ;
    }
}
