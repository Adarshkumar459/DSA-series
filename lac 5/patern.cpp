#include<iostream>
using namespace std;
int main () {
    int n;
    cout<< "Enter the value of Row & col => ";
    cin>>n;
    // outer layer row 
    for  (int row =0; row<n; row++){
          // print space 
           for (int col = 0; col <n-row-1; col++)
           {
              cout<<" ";
           }
            // star print 
            for (int col = 0; col<row+1; col++)
           {
            cout<<"* ";
           }
           cout<<"\n";
       }   
}