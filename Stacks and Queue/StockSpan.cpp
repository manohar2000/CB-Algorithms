#include <iostream>
#include <stack>
using namespace std;

// Problem : Given an index element calculatae steps to reach the previous greatest element in an array
// e.g if arr = [100,80,60,70,60,75,85] then if we are at 75 then we will have to take 4 steps to reach 80

// Solution : create a stack which will have a indices who values are only in the increasing order. 
// We will pop the indices until we get an indice whose value is greater than the current value and then 
// the no. of steps to take from there will current indice - indice present at the top of the stack

void stockspan(int arr[],int n)
{
    int ans[n];
    stack <int> s;


    ans[0] = 0;
    s.push(0);
    
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && arr[s.top()]<arr[i])
        {
             
            s.pop();
        }

        ans[i] = i - s.top();
        s.push(i);        
    }


    for(int i=0;i<n;i++)
    {
        cout<<ans[i] <<" ";
    }

}


int main()
{
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);


    stockspan(arr,n);
    return 0;
}