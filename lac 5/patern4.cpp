#include<iostream>
using namespace std;
int main(){
    int n;
    int col;
    cout<<"Enter Row & col";
    cin>>n;
    for  (int row =0; row<n; row++){
          // print space 
           for (int col = 0; col <n-row-1; col++)
           {
              cout<<" ";
           }
            // star print 
            for (int col = 0; col<row+1; col++)
           {
             if (col==0|| col==row)
             {
               cout<<"* ";
             }
             
             else{
                cout<<"  ";
             }
            
          
           }
           cout<<"\n";
       }   
    
    }