#include<iostream>
using namespace std;
int main(){
   int  arr[]={10,20,30,40,50,60};
   int  size=6;
 int   left=0,right=size-1;
  while (left<=right)
  {
    swap(arr[left],arr[right]);
    left++;
    right--;

  }
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<", ";
  }
  

  
    
}
