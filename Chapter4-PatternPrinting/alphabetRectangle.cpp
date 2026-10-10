#include<iostream>
using namespace std;

int main(){
    int l, b, i, j;
    cout<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of rectangle: ";
    cin>>b;
    for(i=1;i<=l;i++){
        for(j=1;j<=b;j++){
            cout<<char(64+j)<<"  ";        // Just replace "j" with "i" to Invert the rectangle.
        }
        cout<<endl; 
    }
}