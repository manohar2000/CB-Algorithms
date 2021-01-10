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

    void dfsHelp(T node, map<T, bool> &visited)
    {
        visited[node] = true;
        cout<<node<<" ";

        for(T neigbhoor:adjList[node])
        {
            if(!visited[neigbhoor])
            {
                dfsHelp(neigbhoor, visited);
            }
        }
    }


    void dfs(T source)
    {
        map<T,bool> visited;
        dfsHelp(source, visited);
    }
};

int main()
{
    Graph<int> g;
    g.addNode(0,1);
    g.addNode(1,2);
    g.addNode(0,4);
    g.addNode(2,4);
    g.addNode(2,3);
    g.addNode(3,4);
    g.addNode(3,5);

    //g.printList();
    g.dfs(0);

}