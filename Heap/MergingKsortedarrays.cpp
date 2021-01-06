#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;


vector<int> mergeKSortedArray(vector<vector<int>> arr) 
{   
    vector<int> out;

    typedef pair<int, pair<int, int>> ppi; //pair< element, pair<i,j>>

    priority_queue<ppi, vector<ppi>, greater<ppi>> pq;

    for(int i=0;i<arr.size();i++)
    {
        pq.push({arr[i][0], {i,0} });
    }

    while(!pq.empty())
    {
        int i = pq.top().second.first;
        int j = pq.top().second.second;

        out.push_back(pq.top().first);
        pq.pop();
        
        if(j+1 < arr[i].size())
        {
            pq.push({arr[i][j+1], {i,j+1}});
        }

        
    }

    return out;
}

int main()
{
    vector<vector<int>> arr{{0,4,10,12},
                           {1,3,5,7},
                           {2,4,12,15,20}};

    vector<int> out = mergeKSortedArray(arr);

    for(int i=0;i<out.size();i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<endl;

    return 0;
}