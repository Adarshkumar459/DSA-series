#include<iostream>
using namespace std;
int main(){
    int n;
    int col;
    cout <<"Enter row & col => ";
    cin>>n;
    for (int row = 0; row <n; row++)
    {
        // print space 
        for (col=0; col<row;col++)
        {
            cout<<" ";
        }
        
        // print star 
        for ( col=0; col<n-row; col++ ){
            if (col==0||col==n-row-1)
            {
                 cout <<"* ";
            }
            else{
                cout<<"  ";
            }
           

        }
        
        
        cout<<endl;

    }
    

}