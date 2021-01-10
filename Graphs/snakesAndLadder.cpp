#include <iostream>
#include <map>
#include <list>
#include <queue>
#include<climits>
using namespace std;


template<typename T>
class Graph
{
    map<T, list<T> > adjList;

    public:
    Graph()
    {

    }

    void addNode(T a, T b, bool bidirec=true)
    {
        adjList[a].push_back(b);
        if(bidirec)
        {
            adjList[b].push_back(a);
        }
    }

    void printList()
    {
        for(auto i:adjList)
        {
            cout<<i.first<<"->";

            for(auto entry:i.second)
            {   
                cout<<entry<<",";
            }

            cout<<endl;
        }
    }


    int shortestPath(T source, T dest)
    {
        map <T, int> dist;
        map <T,T> parent;
        queue<T> q;        
        
        for(auto node: adjList)
        {
            dist[node.first] = INT_MAX;
        }

        q.push(source);
        dist[source] = 0;
        parent[source] = source;

        while(!q.empty())
        {
            T node = q.front();
            q.pop();

            for(auto i:adjList[node])
            {
                if(dist[i]==INT_MAX)
                {
                    dist[i] = dist[node] + 1; // the distance of children is equal to distance of parent from source + 1
                    q.push(i);
                    parent[i] = node;
                }
            }

        }

        cout<<endl;

        T temp = dest;
        while(temp!=source)
        {
            cout<<temp<<"<--";
            temp = parent[temp];
        }
        cout<<source<<endl;

        return dist[dest];
    }




};

int main()
{
    Graph<int> g;

    int board[50] = {0};
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;


    for(int node=0;node<=36;node++)
    {
        for(int dice=0;dice<=6;dice++)
        {
            int v = node + dice + board[node+dice];
            g.addNode(node,v,false);
        }
    }


    cout<<g.shortestPath(0,36)<<endl;

}