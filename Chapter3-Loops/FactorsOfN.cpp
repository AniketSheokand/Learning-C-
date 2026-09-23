#include<iostream>
using namespace std;

int main(){
    int n , i , x;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            x = i;
            cout<<x<<" ";

        }
    }
    cout<<"are the Factors of "<<n<<".";
}