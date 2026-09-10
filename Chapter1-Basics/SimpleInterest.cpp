#include <iostream>
using namespace std;
int main(){
    float P , R , T , SI;
    cout<<"Enter the Principal Amount(₹): ";
    cin>>P;
    cout<<"Enter the Interest Rate(%): ";
    cin>>R;
    cout<<"Enter the Time (In Years): ";
    cin>>T;
    SI = (P*R*T)/100;
    cout<<"The simple interest is: "<<SI<<"₹";

}



