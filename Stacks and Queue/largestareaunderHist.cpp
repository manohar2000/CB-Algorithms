#include <iostream>
#include <stack>
using namespace std;

void largestArea(int arr[],int size)
{    

    // constructing array having indices of smallest hist in the left side
    stack <int> sl;
    int lmin[size];
    lmin[0] = -1;
    sl.push(0);

    for(int i=1;i<size;i++)
    {
        while(!sl.empty() && arr[i]<=arr[sl.top()])
        {
            sl.pop();
        }

        if(sl.empty()) lmin[i] = -1;
        else lmin[i] = sl.top();

        sl.push(i);
    }

    
    // for(int i=0;i<size;i++)
    // {
    //     cout<<lmin[i]<<" ";
    // }
    // cout<<endl;


    // constructing array having indices of smallest hist in the rigth side
    stack <int> sr;
    int rmin[size];
    rmin[size-1] = size;
    sr.push(size-1);

    for(int i=size-2;i>=0;i--)
    {
        while(!sr.empty() && arr[i]<= arr[sr.top()])
        {
            sr.pop();
        }

        if(sr.empty()) rmin[i] = size;
        else rmin[i] = sr.top();
        sr.push(i);
    }

    // for(int i=0;i<size;i++)
    // {
    //     cout<<rmin[i]<<" ";
    // }
    // cout<<endl;


    // ans would equal to (r-l-1)*curr_len
    int ans[size];
    for(int i = 0;i<size;i++)
    {
        ans[i] = (rmin[i] - lmin[i] - 1)*arr[i];
        cout<<ans[i]<<" ";
    }   


}




int main()
{
    int arr[] = {6,2,5,4,5,1,6};

    int size = sizeof(arr)/sizeof(arr[0]);
    largestArea(arr,size);

    return 0;
}
