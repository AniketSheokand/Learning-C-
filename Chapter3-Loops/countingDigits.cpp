#include<iostream>
using namespace std;

int main(){
    int num, count;
    cout<<"Enter Your Number: ";
    cin>>num;
    for(count=0; num>0;count++){
        num = num/10;
    }
    cout<<count;
}

// ----------------------2nd Method-------------------------

// int main(){
//     int num, count = 0;
//     cout<<"Enter Your Number: ";
//     cin>>num;
// while(num>0){
//     num = num/10;
//     count++;
// }
// cout<<count;
// }