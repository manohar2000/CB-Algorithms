#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int rows;
    int columns;
    
    cout<<"enter no. of rows:";
    cin>>rows;
    
    cout<<"enter no. of columns:";
    cin>>columns;
    
    
    int a[rows][columns];
    int val = 1;
    cout<<"Actual array:"<<endl;
    for(int row=0;row<rows;row++)
    {
        for(int column=0;column<columns;column++)
        {
            a[row][column]=val;
            val+=1;
            cout<<a[row][column]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"-------------------------------"<<endl;
    cout<<"Wave form:"<<endl;
    int row=0;
    int column=0;
    while(column<columns)
    {
        if(column%2==0)
        {
          row=0;
          while(row<rows)
          {
            cout<<a[row][column]<<" ";
            row++;
          }
          cout<<endl;
          
        }
        
        else
        {
            row = rows-1;
            while(row>=0)
            {
                cout<<a[row][column]<<" ";
                row--;
            }
            
            cout<<endl;
        }
    
        column+=1;
    }
    return 0;
}