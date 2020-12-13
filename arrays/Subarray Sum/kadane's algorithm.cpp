#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n;
  cout<<"enter the no. elements in the array"<<endl;
  cin>>n; //taking the number of elements in the array from the user

  int a[n]; //creating an array of n elements

  cout<<"enter the elements in the array"<<endl;
  // taking the input array from the user
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int currSum = 0;
  int maxSum = -10000;

  // KADANE's algorithm : loop through the entire array, if the cummSum becomes -ve make currSum equal to 0
  // else add it to the currSum 
  for(int i=0;i<n;i++)
  {
    if(currSum+a[i]<0)
    {
        currSum=0;
    }
    else
    {
        currSum+=a[i];
    }
    if(currSum>maxSum)
    {
        maxSum=currSum;
        
    }
  }
  
  cout<<maxSum<<endl;
}