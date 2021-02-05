//Question: Given a rod of len n and cost of selling a portion of rod(1 to n) find the maximum profit.
#include <bits/stdc++.h>
using namespace std;

//Solution: The idea is to solve by recursion and memoise the max profit for a len n: Complexity O(n**2)

int memo[100] = {};
int maxProfit(int cost[], int n) //top-down approach 
{

    if(n==0) return 0;

    if(memo[n]!=-1) return memo[n];

    int best = 0;
    for(int i=1;i<=n;i++)
    {
        int netProfit = cost[i] + maxProfit(cost, n-i);
        best = max(best, netProfit);
    }

    memo[n] = best;
    return best;
}

int maxProfit_bu(int cost[], int totalLen) //bottom-up
{
    int dp[100] = {};
    for(int len=1;len<=totalLen;len++)
    {
        int best = 0;
        for(int cut=1;cut<=len;cut++)
        {
            best = max(best, cost[cut] + dp[len-cut]);
        }
        dp[len] = best;
    }

    return dp[totalLen];
}


int main()
{   
    int n;
    cin>>n;
    int cost[100];
    for(int i=1;i<=n;i++) cin>>cost[i];

    //memset(memo,-1,sizeof(memo));
    //cout<<maxProfit(cost,n)<<endl;

    cout<<maxProfit_bu(cost,n)<<endl;
    return 0;
}