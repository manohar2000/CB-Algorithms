#include <iostream>
using namespace std;

// Aim : to find how many sub-arrays  have a sum which is exactly divisible by an integer m
// Logic : First calculate the prefix sum, modulo it each prefix sum with m. The indices having the same value 
// will be the two indices (a,b) . The sum of elements b/w a and b will be divisible by m. 
// To count the total no. of such arrays we can calculate the frequency of all the m(0-->m-1) modulo values and take xC2 of them. 


int subArrays(int arr[],int n, int m) // n is the no. elements in the array, m is the divisor
{
    int prefixSumArr[n+1] ={0};
    int ans=0;

    prefixSumArr[0] = 0;
    int prefixSum = prefixSumArr[0];

    for(int i=0;i<=n;i++)
    {
        prefixSum+= arr[i];
        prefixSumArr[i+1] = prefixSum;
    }

    // calculating the modulo arr and freq array
    int moduloArr[n];
    int freq_arr[m] = {0} ;

    for(int i=0;i<=n;i++)
    {
        moduloArr[i]= prefixSumArr[i] % m;
        freq_arr[prefixSumArr[i] % m]+=1;
    }

    

    // calculating the combinations
    for(int i=0;i<m;i++)
    {
        if(freq_arr[i]>1)
        {
            ans+= (freq_arr[i] * (freq_arr[i]-1))/2;  //xC2 = (x*(x-1))/2
        }
    }

    
    return ans;

}



int main()
{
    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }

    cout<<subArrays(arr,n,m);
    return 0;
}