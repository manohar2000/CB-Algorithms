/* Question: Given n wines and their costs. The effective cost of each bottle is cost of each bottle* year it is being sold.
The only condition is we can sell only one bottle in each year and we can select a bottle from either the start or the end.
 We need to sell all the bottle in a way to maximize our profit. 
*/
#include <bits/stdc++.h>
#include <cstring>
using namespace std;


/* Solution: The idea is to select the start bottle and call the function again for rest of the bottle 
 and select the last bottle and call the function for rest of the bottles for the next year. 
 The max_profit will the max(first,last).

 To reduce the computation we store the values in a 2d array, where i is the start and j is the end.
 */

int memo[100][100];


int max_profit(int arr[],int start, int end, int year)  //bottom-up
{
    if(start>end) return 0;

    if(memo[start][end]!=-1) return memo[start][end];

    int first = arr[start]*year + max_profit(arr, start+1, end, year + 1);
    int last = arr[end]*year + max_profit(arr, start, end-1, year + 1);

    int ans = max(first,last);
    memo[start][end] = ans;
    return ans;

}

int max_profit_td(int arr[], int n) //top to down approach
{
    int dp[100][100] = {};
    int year = n;

    for(int i=0;i < n;i++)
    {
        dp[i][i] = year * arr[i];
    }

    year-=1;
    for(int len = 2;len<=n;len++)
    {
        int start = 0;
        int end = n - len;
        while(start <= end)
        {
            int endWindow = start + len -1;
            dp[start][endWindow] = max(arr[start]*year + dp[start+1][endWindow],
                                    arr[endWindow]*year + dp[start][endWindow - 1]);

            start+=1;                            
        }
        year-=1;
    }

    return dp[0][n-1];
}


int main()
{
    int n;
    cin>>n;
    int arr[100];
    
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }


    memset(memo,-1,sizeof(memo));
    //cout<<max_profit_td(arr,0, n-1, 1)<<endl;
    cout<<max_profit_td(arr,n)<<endl;   

    return 0;
}