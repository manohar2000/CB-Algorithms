#include <iostream>
#include <map>
#include <list>
#include <queue>
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

    bool cycleDetectBFS(T source)
    {
        map<T,T> parent;
        queue <T> q;
        map<T,bool> visited;

        q.push(source);
        visited[source] = true;
        parent[source] = source;

        while(!q.empty())
        {
            T node = q.front();
            q.pop();
            for(auto currnode:adjList[node])
            {
                if(visited[currnode] && parent[node]!=currnode)
                {
                    return true;
                }

                else if(!visited[currnode])
                {
                    q.push(currnode);
                    visited[currnode] = true;
                    parent[currnode] = node;
                }                
            }            
        }
        return false;
    }

};


int main()
{
    Graph<int> g;
    g.addNode(1,2);
    g.addNode(1,4);
    g.addNode(4,3);
    // g.addNode(2,3);

    cout<<g.cycleDetectBFS(1)<<endl;
    return 0;
}