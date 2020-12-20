#include <iostream>
using namespace std;

int partition(int arr[], int low, int high, int pivot) 
{   
    int i = low;
    int j = low;
    
    while(i<=high)
    {
        if(arr[i]>pivot)
        { 
            i++;
        }
        else 
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int low, int high)
{
    if(low>=high) return;

    int pIndex;

    pIndex = partition(arr, low, high, arr[high]);    
    quickSort(arr,low,pIndex-1);
    quickSort(arr,pIndex+1,high);
    
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

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

    
}