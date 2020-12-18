#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int index = -1;
    int s = 0;
    int e = n-1;
    while(s>=0 && e<n)
    {
        int mid = (s+e)/2;
        if(arr[mid]>key)
        {
            e = mid-1;
        }
        else if(arr[mid]<key)
        {
            s = mid+1;
        }

        else
        {
            index = mid;
            break;
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

    cout<< binary_search(arr,n,key) ;

    return 0;

}