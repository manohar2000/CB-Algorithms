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
  int left = 0;
  int right = 0;
  // logic : creating two indices i and j(j>=i), to get all the possible subsets. Creating another loop to print the elements

  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      currSum=0;
      for(int k=i;k<=j;k++)
      {
        currSum+=a[k];
      }
      if(currSum>maxSum)
      {
          maxSum = currSum;
          left = i;
          right = j;
      }
    //cout<<endl;
    }
  }
  cout<<maxSum<<endl;
  cout<<left<<endl;
  cout<<right<<endl;
}