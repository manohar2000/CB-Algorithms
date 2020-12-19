#include <iostream>
#include <math.h>
using namespace std;

// Problem : Taavas SaDDAs https://codeforces.com/problemset/problem/535/B

//explanation https://www.youtube.com/watch?v=wEZfc6cPC4w&list=PLSBQpsxGP-xhCKcI2Y1sU4h2Tt9aGudJJ&index=139 1:59:00 onwards

int getIndex(char arr[],int n)
{
    // no. of lucky numbers before the nth place i.e if n=4774 then no. of numbers till the 100th place will be 2+4+8
    int ans = (1<<n) - 2; // 2*(pow(2,n-1)-1)/(r-1) standard gp formula == pow(2,n) - 2

   
    for(int i=n-1,pos=0;i>=0;i--,pos++)
    {
        if(arr[i]=='7')
        {
            ans+= (1<<pos);
        }
    }

    return ans+1;
}



int main()
{
    int n;
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<getIndex(arr,n)<<endl;;


    return 0;
}