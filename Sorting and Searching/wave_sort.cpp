#include <iostream>
using namespace std;

void wavesort(int arr[], int n)
{
    // LOGIC : aim is to make every second element as the local minima.
    // Traverse to every second element in the array and make comparision with the left and right element and make neccessary swaps

    for(int i=1;i<n;i+=2)
    {
        // if left is small then swap with the current element
        if(arr[i-1]<arr[i])
        {
            swap(arr[i-1],arr[i]);
        }
        // if right element is small then swap
        if(arr[i]>arr[i+1])
        {
            swap(arr[i+1],arr[i]);
        }
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

    wavesort(arr,n);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}