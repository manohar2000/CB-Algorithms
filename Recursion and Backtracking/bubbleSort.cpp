#include <iostream>
using namespace std;

void bubbleSort(int arr[], int j,int n)
{
    if(n==1) return; //if there is only one element in the array then return nothing

    if(j==n-1) return bubbleSort(arr,0,n-1); // equivalent to incrementing i
    // if we have reached the end of an array after putting an element in the correct place, then we again start the loop from start

    if(arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);        
    }
    bubbleSort(arr,j+1,n); //equivalent to incrementing j
    return;
}


void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }

    bubbleSort(arr,0,n);
    printArr(arr,n);
    return 0;
}