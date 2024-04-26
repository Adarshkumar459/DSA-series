#include<iostream>
using namespace std;
int main()
{

     int n;
     
     int col,row;
    cout <<"Enter row & col => ";
    cin>>n;
    // firtst section
    for  (row =0; row<n; row++)
    {
          // print space 
           for (col = 0; col <n-row-1; col++)
           {
              cout<<" ";
           }
            // star print 
            for (col = 0; col<row+1; col++)
           {
            cout<<"* ";
           }
           cout<<"\n";
    }  
      
    //   2nd section 
       for (row = 0; row <n; row++)
    {
        // print space 
        for (col=0; col<row;col++)
        {
            cout<<" ";
        }
        
        // print star 
        for ( col=0; col<n-row; col++ ){
            
            cout <<"* ";

        }
        
        
        cout<<endl;

    }
}