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
  // logic : creating an array(cummArr) which contains cummulative sum of all elements till ith index. 
  // Thereafter, generating all (i,j) pairs whose sum will be currArr[j] - cummArr[i-1] and taking the maxSum
  
  //generating the cummArr
  int cummArr[n] ;
  cummArr[0] = a[0];
  for(int i=1;i<n;i++)
  {
    cummArr[i] = cummArr[i-1] + a[i];
  }
  
  // generating all (i,j) pairs and calculating the sum
  for(int i=0;i<n;i++)
  {
    currSum = 0;
    for(int j=i;j<n;j++)
    {
        currSum = cummArr[j] - cummArr[i-1];
        if(currSum>maxSum)
        {
            maxSum=currSum;
            left = i;
            right = j;
        }
    }
  }
  cout<<maxSum<<endl;
  cout<<left<<endl;
  cout<<right<<endl;
}