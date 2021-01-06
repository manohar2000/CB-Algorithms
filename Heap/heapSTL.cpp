#include <iostream>
#include <vector>
using namespace std;

#include <queue> // prioritity exists in the priority_queue class of queue
#include <functional> // the in-built comparrator for building min-heap exists in this header file

int main()
{
    //priority_queue <int> pq; //by default it makes a max heap

    // generates min heap
    priority_queue<int, vector<int>,greater<int>> pq;

    int a[10] = {5,6,17,18,9,11};

    for(int i=0;i<6;i++)
    {
        pq.push(a[i]);
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}