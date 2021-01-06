#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;

void query_print(priority_queue<int,vector<int>,greater<int>> pq)
{
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<endl;
}


int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;

    int cs = 0;
    int k = 3;
    int no;    
    while(scanf("%d",&no)!=EOF)
    {
        if(no==-1) query_print(pq);

        else if(cs<k)
        {
            pq.push(no);
            cs+=1;
        }

        else
        {
            if(pq.top()<no)
            {
                pq.pop();
                pq.push(no);
            }
        }
    }

    return 0;
}