#include <iostream>
using namespace std;

int lower_bound(int arr[], int n, int key) //first occurence
{
    int index = -1;
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]>key)
        {
            e = mid-1;
        }
        if(arr[mid]<key)
        {
            s = mid+1;
        }
        else if(arr[mid]==key)
        {
            e = mid-1;
            index = mid;
        }
    }

    return index;
}

int upper_bound(int arr[], int n, int key)
{
    int index = -1;
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]>key)
        {
            e = mid-1;
        }
        if(arr[mid]<key)
        {
            s = mid + 1; 
        }

        else if(arr[mid]==key)
        {
            index = mid;
            s = mid+1;
        }
        
    }
    return index;
}


int main()
{
    int n;
    cin>>n;
    cin.get();

    int key;
    cin>>key;
    cin.get();
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<< lower_bound(arr,n,key) <<endl;
    cout<< upper_bound(arr,n,key) <<endl;

    return 0;

}