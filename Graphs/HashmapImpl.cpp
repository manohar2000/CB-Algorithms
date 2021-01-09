#include <iostream>
#include <map>
#include <list>
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
};

int main()
{

    Graph<string> g;
    g.addNode("Putin","Trump",false);
    g.addNode("Putin","Modi",false);
    g.addNode("Putin","Pope",false);
    g.addNode("Modi","Yogi",true);
    g.addNode("Modi","Prabhu",true);

    g.printList();

}