#include<iostream>
using namespace std;

int main(){
    int num , factorial = 1;
    cout<<"Enter Your Number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        int j = 1;
        while(j <= i){
            factorial *= j;
            j++;
        }
        cout<<i<<"! --> "<<factorial<<endl;;
        factorial = 1;
    }
}