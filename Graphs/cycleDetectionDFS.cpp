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


    bool isCyclicHelper(T node, map<T,bool> &visited, map<T,bool> inStack)
    {
        visited[node] = true;
        inStack[node] = true;

        for(T neighbour:adjList[node])
        {
            if( (!visited[neighbour] && isCyclicHelper(neighbour,visited,inStack)) || inStack[neighbour])
            {
                return true;
            }
        }
        inStack[node] = false;
        return false;      

    }

    bool Iscyclic()
    {
        map<T, bool> visited;
        map<T, bool> inStack;


        for(auto i:adjList)
        {
            T node = i.first;
            if(!visited[node])
            {
                bool cyclePresent = isCyclicHelper(node, visited, inStack);
                if(cyclePresent) return true;
            }
        } 

        return false;

    }    
};


int main()
{
    Graph<int> g;
    g.addNode(0,2,false);
    g.addNode(0,1,false);
    g.addNode(2,3,false);
    g.addNode(2,4,false);
    // g.addNode(3,0,false); // back loop
    g.addNode(4,5,false);
    g.addNode(1,5,false);


    cout<<g.Iscyclic()<<endl;


    return 0;
}