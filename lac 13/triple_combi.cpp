#include<iostream>
using namespace std;
int main(){
    int arr[]={2,10,35,2,4};
    int num =5;
    for (int i = 0; i < num; i++)
    {
       for (int j = 0; j < num; j++)
       {
        for (int  k = 0; k < num; k++)
        {
           cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
        }
         cout<<endl;
       }
      
    }
    
}