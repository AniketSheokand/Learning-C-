#include<iostream>
using namespace std;

int main(){
    int a , d , i , n;
    cout<<"Enter The First Term of AP: ";
    cin>>a;
    cout<<"Enter The Common Difference of AP: ";
    cin>>d;
    cout<<"Enter The Number of Terms: ";
    cin>>n;
    for(i=a;i<=(n-1)*d+a;i=i+d){
        cout<<i<<" ";
    }
}