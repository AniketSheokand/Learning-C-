#include<iostream>
using namespace std;
void calc1(){ 
    float x = 15, y = 3.14;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    cout<<"\n";
}
void calc2(){
    float x = 7.3, y = 2.1;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
}
void calc3(){
    float x = 5 , y = 2;
    cout<<x<<endl;
    cout<<y<<endl;
}
int main(){
    calc1();
    calc2();
    calc3();
}