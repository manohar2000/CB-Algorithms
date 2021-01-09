#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <climits>
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


    void shortestPath(T source)
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
            cout<<node<<" ";
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
        for(auto i:adjList)
        {
            T node = i.first;
            cout<<"Distance of "<< node << " from source is "<<dist[node];
            cout<<endl;
        }

    }

};

int main()
{
    Graph<int> g;

    g.addNode(0,1);
    g.addNode(0,4);
    g.addNode(4,3);
    g.addNode(1,4);
    g.addNode(1,2);
    g.addNode(2,3);
    g.addNode(2,3);
    g.addNode(3,5);

    g.shortestPath(0);

    return 0;

}