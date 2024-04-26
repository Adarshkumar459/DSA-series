#include<iostream>
using namespace std;

void plus1(int &k ){
   k++;
    return;

}



int main(){
// call By Refrance .....
int k;
cout<<"Enter a value => ";
cin>>k;
plus1(k);
cout<<" k is => "<<k;

}