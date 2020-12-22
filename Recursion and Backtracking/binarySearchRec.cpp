#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high, int key)
{
    if(low>high)
    {
        return -1;
    }

    int mid = low + (high - low)/2;
    if(arr[mid]==key)
    {
        return mid;
    }

    if(key>arr[mid]) return binarySearch(arr,mid+1,high,key);
    else return binarySearch(arr,low,mid-1,key);
}

int main()
{
    int n,key;
    cin>>n>>key;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<binarySearch(arr,0,n-1,key);
    return 0;
}