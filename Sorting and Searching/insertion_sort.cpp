#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int num = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>num)        
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = num;
    }

}


int main()
{
    int n;
    cin>>n;
    cin.get();
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertionsort(arr,n);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}