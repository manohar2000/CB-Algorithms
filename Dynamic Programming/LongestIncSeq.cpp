/* Question: Finding the longest increasing subsequence. 
e.g if inp 10,22,9,33,21,50,41,60,80,6 then longest increasing sequence is 6
*/

#include <bits/stdc++.h>
using namespace std;

int lis(int arr[],int n)
{
    int out[100]={};
    for(int i=0;i<n;i++) out[i] = 1;

    int ans = 0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>=arr[j])
            {
                out[i] = max(out[i], 1+out[j]);
            }
        }

        ans = max(ans,out[i]);
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<lis(arr,n)<<endl;

    return 0;
}