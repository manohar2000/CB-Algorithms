/*
Question: Given a n*n grid and integer values in them. 
We have to find the route from (0,0) to (n,n) such that the sum of the path is minimum. We can move either down or to the right
*/
#include <bits/stdc++.h>
using namespace std;

// the idea is to traverse through the array and fill the minimum cummulative cost for each (i,j)
int minCost(int arr[][100], int m, int n)
{
    // filling the first column
    for(int j=1; j<n;j++) arr[0][j] = arr[0][j] + arr[0][j-1];

    // filling the first row
    for(int i=1;i<m;i++) arr[i][0] = arr[i][0] + arr[i-1][0];


    // traversing through the rest of the cells and filling the taking the cell, from above or left, which has the least value
    for(int row = 1; row<m; row++)
    {
        for(int column=1; column<n; column++)
        {
            arr[row][column] = min(arr[row-1][column], arr[row][column-1]) + arr[row][column];
        }
    }

    return arr[m-1][n-1];
}


int main()
{
    int arr[100][100] = {{1,2,3},
                     {4,8,2},
                     {1,5,3}};

    cout<<minCost(arr, 3, 3)<<endl;
}