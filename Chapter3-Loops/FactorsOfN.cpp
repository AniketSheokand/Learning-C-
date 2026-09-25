#include<iostream>
using namespace std;

int main(){
    int n , i , x;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(i=n/2;i>=1;i--){
        if(n%i==0){
            x = i;
            cout<<x<<" ";

        }
    }
    cout<<"are the Factors of "<<n<<".";
}