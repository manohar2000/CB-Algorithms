/* Given a string m, we have to convert it to n in minimum number of operations. 
A operation is either a deletion, insertion or replacement.
e.g m=sunday and n=saturday, then the mimimum no. of operations is 3
*/
#include <bits/stdc++.h>
using namespace std;
/*
Solution: The solution is to create a 2d dp array with m depicting each row and n depicting each column.
Each state in the matrix represents the minimum ops to be taken to convert string till arr[m] to arr[n].
For each state we can do three operations i.e insertion, deletion and replacement.
the cost of replacement is: 1 + dp[m-1][n-1]
the cost of insertion is: 1 + dp[m][n-1]
the cost of deletion is: 1 + dp[m-1][n]
*/

int minCost(char in[], char out[])
{
    int dp[100][100] = {};
    int m = strlen(in);
    int n = strlen(out);


    // We'll initialise the first row and column as an empty string
    dp[0][0] = 0; // cost of converting null str to null str

    for(int i=1; i<=m; i++) dp[0][i] = 1 + dp[0][i-1]; //filling the first row

    for(int j=1; j<=n; j++) dp[j][0] = 1 + dp[j-1][0]; // filling the first column

    for(int row=1;row<=m;row++)
    {
        for(int column=1;column<=n;column++)
        {
            int q1 = dp[row-1][column-1]; //for replacement
            int q2 = dp[row-1][column]; // for insertion
            int q3 = dp[row][column-1]; // for deletion
            dp[row][column] = min(q1,min(q2,q3)) + (in[row-1]!=out[column-1]); // if charecter is equal, then we would not do anything
             
        }
    }
    return dp[m][n];
}

int main()
{
    char m[100];
    char n[100];
    cin >> m >> n;

    cout<<minCost(m,n)<<endl;
    return 0;
}