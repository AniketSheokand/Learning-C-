#include<iostream>
using namespace std;

int main(){
    int n, i, j;
    cout<<"Enter the radius of plus: ";    //Number of extension of plus, from centre point.
    cin>>n;
    for(i=1;i<=(2*n+1);i++){
        for(j=1;j<=(2*n+1);j++){
            if(i==(n+1) || j==(n+1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}