#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
using namespace std;

// Problem: Number of steps required to reduce a no. to 1, given we can perform division by 3, division by 2 or subtract with -1

int memo[10000];

int bottom_up(int n)
{
    memo[0] = 0;
    memo[1] = 0;
    memo[2] = 1;
    memo[3] = 1;

    int q1 = INT_MAX;
    int q2 = INT_MAX;
    int q3 = INT_MAX;

    // we'll check for all possible routes i.e through /3, /2 and - 1 and see pick the mininmum of all the three routes;
    // to avoid overlap we'll store the value of each n and reference it
    for(int i=4;i<=n;i++)
    {
        if(n%3==0) q1 = 1 + bottom_up(n/3);
        if(n%2==0) q2 = 1 + bottom_up(n/2);
        q3 = 1 + bottom_up(n-1);
        memo[n] = min(q1, min(q2,q3));
    }

    return memo[n];
}


int top_down(int n)
{
    // The idea is similar to bottom_up approach, but here we are starting from n
    if(n==1) return 0;
    
    int q1 = INT_MAX;
    int q2 = INT_MAX;
    int q3 = INT_MAX;

    if(memo[n]!=-1) return memo[n];

    if(n%3 == 0) q1 = 1 + top_down(n/3);
    if(n%2 == 0) q2 = 1 + top_down(n/2);
    q3 = 1 + top_down(n-1);

    memo[n] = min(q1,min(q2,q3));
    return memo[n];

}


int main()
{
    int n;
    cin>>n;
    fill(memo,memo+n+1,-1);

    //cout<<bottom_up(n)<<endl;
    cout<<top_down(n)<<endl;

    return 0;
}