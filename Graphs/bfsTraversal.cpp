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


    void bfs(T src)
    {
        map<T,bool> visited;
        queue <T> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty())
        {
            T node = q.front();
            cout<<node<<" ";
            q.pop();
            
            for(auto i:adjList[node])
            {
                if(visited[i]==false)
                {
                    q.push(i);
                    visited[i]=true;
                }
            }
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

    //g.printList();
    g.bfs(0);

}