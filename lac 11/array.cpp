#include<iostream>
using namespace std;

int main(){
    int arr[100000];
    for (int  i = 0; i < 100000; i++)
    {
      arr[i]=i;
        cout<< arr[i]<<endl;
    }
  
    // cout<<&arr<<endl<<&arr[0];
}