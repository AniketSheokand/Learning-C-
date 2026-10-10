#include<iostream>
using namespace std;

int main(){
    int h, i, j;
    cout<<"Enter the height of triangle: ";
    cin>>h;
    for(i=1;i<=h;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                cout<<char(64+j)<<"  ";
            }
            else{
                cout<<j<<"  ";
            }
        }
        cout<<endl; 
    }
}