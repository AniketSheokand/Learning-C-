#include<iostream>
using namespace std;

int main(){
    int x , y; 
    cout<<"Enter the x co-ordinate: ";
    cin>>x;
    cout<<"Enter the y co-ordinate: ";
    cin>>y;
    if(x==0){
        if(y==0){
            cout<<"The point lies on the origin.";
        }
        else{
            cout<<"The point lies on the y-axis.";
        }
    }
    else if(x>0){
        if(y>0){
            cout<<"The point lies in 1st Quadrant.";
        }
        else if(y==0){
            cout<<"The point lies on the x-axis.";
        }
        else{
            cout<<"The point lies in 4th Quadrant.";
        }
    }
    else{
        if(y>0){
            cout<<"The point lies in 2nd Quadrant.";
        }
        else if(y==0){
            cout<<"The point lies on the x-axis.";
        }
        else{
            cout<<"The point lies in 3rd Quadrant.";
        }
    }
}