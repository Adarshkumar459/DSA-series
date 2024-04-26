#include<iostream>
using namespace std;

int main(){
int arr[]={0,1,0,0,1,1,0,1,1,0,0};
int count0=0;
int count1=0;
for (int i = 0; i < 11; i++)
{
    if(arr[i]==0){
        count0=count0+1;

    }
     if(arr[i]==1){
        count1=count1+1;
        
    }

}
cout<<"count of 0 => "<<count0<<endl;
cout<<"count of 1 => "<<count1;


}