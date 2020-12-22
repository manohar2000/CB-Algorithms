#include <iostream>
using namespace std;


void selectionsort(int arr[], int n)
{
    int min = arr[0];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
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

    selectionsort(arr,n);
        for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}
