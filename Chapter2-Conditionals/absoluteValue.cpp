#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Your Number: ";
    cin>>x;
// ---------------1st Method----------------//
//     if(x>=0){
//         cout<<"Absolute Value of "<<x<<" is "<<x;        // this code is slightly longer
//     }                                
//     else{
//         cout<<"Absolute Value of "<<x<<" is "<<-x;
//     }
// }
// ---------------2nd Method----------------//
cout<<"The absolute value is ";
    if(x<0){
        cout<<-x;           // here the value of x is not changed
    }
    else{
        cout<<x;
    }
}
// ---------------3rd Method----------------//
// if(x<0){
//     x = -x               // here we changed the value of integer to its absolute value
// }
// cout<<"The Absolute Value is "<<x;