#include <iostream>
using namespace std;

// Aim : to modify the array in-place(without making a new array) so that all the elements <= pivot are on the left
// and all the elements >= pivot are in the right side


void partition(int arr[],int n,int p) 
{   
    int i = 0;
    int j = 0;

    while(i<n)
    {
        if(arr[i]>p) i++;
        else 
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
    }

    cout<<"partionining index: "<<j<<endl;

}


int main()
{
    int n, pivot;
    cin>>n>>pivot;
    int arr[n];
    

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    partition(arr,n,pivot);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}