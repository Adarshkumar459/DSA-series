#include<iostream>
using namespace std;
int increment1(int n ){
    n=n+1;
    return n;

}



int main (){
// call By value ....
int n;
cout<<"Enter a value => ";
cin>>n;
n=increment1(n);
cout<<"n is => " <<n;
}