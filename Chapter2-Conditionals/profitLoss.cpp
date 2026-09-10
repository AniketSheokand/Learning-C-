#include<iostream>
using namespace std;

int main(){
    float cp , sp;
    cout<<"Enter the Cost Price of the product: ";
    cin>>cp;
    cout<<"Enter the Selling Price of the product: ";
    cin>>sp;
    if(sp>cp){
        cout<<"Profit of Rupees "<<sp-cp<<endl;
        cout<<"Profit of "<<(sp-cp)/cp*100<<" %";
    }
    if(sp=cp){
        cout<<"No Profit or Loss incured.";
    }
    else{
        cout<<"Loss of Rupees "<<cp-sp<<endl;
        cout<<"Loss of "<<(cp-sp)/cp*100<<" %";
    }
}