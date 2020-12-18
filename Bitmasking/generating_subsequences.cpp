#include <iostream>
using namespace std;

// Given a string, the goal is to generate all subsequences

void printSubsequence(char arr[], int m)
{
    int i=0;
    while(m>0)
    {
        if(m&1)
        {
            cout<<arr[i];            
        }
        else
        {
            cout<<"";            
        }
        i++;
        m = m>>1;
    }   
}


void generateCombinations(char arr[],int n)
{
    n = (1<<n) - 1;
    while(n>=0)
    {
        printSubsequence(arr,n);
        n--;
        cout<<endl;
    }
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

    generateCombinations(arr,n);

    return 0;
}