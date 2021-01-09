#include <iostream>
#include <list>
using namespace std;


class Graph
{
    int V;
    list<int> *l;

    public: 
        Graph(int v)
        {
            V= v;
            l = new list<int> [V];
        }

        void addNode(int a, int b, bool biDirection=true)
        {
            l[a].push_back(b);
            if(biDirection)
            {
                l[b].push_back(a);
            }
        }

        void printAdjList()
        {
            for(int i=0;i<V;i++)
            {
                cout<<i<<"->";
                for(int vertex: l[i])
                {
                    cout<<vertex<<",";
                }
                cout<<endl;
            }
        }
};


int main()
{
    Graph g(5);
    g.addNode(0,1);
    g.addNode(0,4);
    g.addNode(4,3);
    g.addNode(1,4);
    g.addNode(1,2);
    g.addNode(2,3);
    g.addNode(2,3);
    

    g.printAdjList();
}