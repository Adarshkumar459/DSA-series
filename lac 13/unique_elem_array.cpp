#include<iostream>
using namespace std;
int findunique (int arr[],int size){
    int ans=0;
    for (int i = 0; i <size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int arr[]={10,11,2,3,2,10,3,15,15};
    int    size=9;
    int unique_elem;
    unique_elem=findunique(arr,size);
    cout<<"unique item is => "<<unique_elem;
}