#include <bits/stdc++.h>
using namespace std;
//Question: Given two string, we have to find the length of maximum


int lcs(char X[], char Y[])
{
    int m = strlen(X);
    int n = strlen(Y);

    int dp[100][100] = {};

    for(int j=0;j<=m;j++) dp[0][j] = 0;
    for(int i=0;i<=n;i++) dp[i][0] = 0;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(X[i-1]==Y[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }

    return dp[m][n];
}



int main()
{
    char m[100];
    char n[100];
    cin>> m >> n;
    cout<<lcs(m,n)<<endl;

    return 0;
}