#include<iostream>
using namespace std;
int main(){
    int x=5;   // x is a normal interger varible 

    // k Refrance varible of of x .......
    int &k=x;    // k is a nickname of x .......

    // c Refrance varible of of x .......
    int &c=x;   // c is a nickname of x .......

    cout<<x<<endl;
    cout<<k<<endl;
    cout<<c<<endl;
     
     k++;

    cout<<x<<endl;
    cout<<k<<endl;
    cout<<c<<endl;

}