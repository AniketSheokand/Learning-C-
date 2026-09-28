#include<iostream>
using namespace std;

int main(){
    int x , i = 1;
    cout<<"Enter Your Number: ";
    cin>>x;
    cout<<endl<<"The table of "<<x<<endl<<endl;
    while(i<=10){
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
        i++;
    }

}