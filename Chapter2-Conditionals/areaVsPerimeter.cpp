#include<iostream>
using namespace std;

int main(){
    float length , breadth , Area , Perimeter;
    cout<<"Enter the length of the rectangle(cm): ";
    cin>>length;
    cout<<"Enter the breadth of the rectangle(cm): ";
    cin>>breadth;
    Area = length*breadth;
    Perimeter = 2*(length+breadth);
    if(Area>Perimeter){
        cout<<"Area is greater than Perimeter";
    }
    else if(Area<Perimeter){
        cout<<"Perimeter is greater than Area";
    }
    else{
        cout<<"Area is same as Perimeter";
    }
    cout<<'\n'<<"Area: "<<Area<<" (square cm)"<<endl;
    cout<<"Perimeter: "<<Perimeter<<" (cm)";
}