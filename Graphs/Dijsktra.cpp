#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph
{
    unordered_map<T, list<pair<T, int>>> m;

    public:
    void addEdge(T u, T v, int dist, bool bidirec=true)
    {
        m[u].push_back(make_pair(v, dist));
        if(bidirec){
            m[v].push_back(make_pair(u, dist));
        }
    }

    void printAdj()
    {
        for(auto j:m)
        {
            cout<<j.first<<"->";
            for(auto l:j.second)
            {
                cout<<"("<<l.first<<","<<l.second<<")";
            }
            cout<<endl;
        }
    }

    void dijisktraSSSP(T src)
    {
        unordered_map<T, int> dist;

        for(auto j:m)
        {
            dist[j.first] = INT_MAX; //setting all distances to infinity           
        }

        set<pair<int, T> > s;
        dist[src] = 0;
        s.insert(make_pair(0,src));

        while(!s.empty())
        {
            auto p = *(s.begin());
            T node = p.second;

            int nodeDist = p.first;
            s.erase(s.begin());

            for(auto childPair: m[node])
            {
                if(nodeDist + childPair.second < dist[childPair.first])
                {
                    T dest = childPair.first;
                    // since sets cannot be modified we have to remove it and add a new pair
                    auto f = s.find(make_pair(dist[dest],dest));
                    if(f!=s.end())
                    {
                        s.erase(f);
                    }

                    // inserting new pair
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest], dest));

                }   
            }
        }


        for(auto d:dist)
        {
            cout<<d.first<<" is at a distance of:"<<d.second<<endl;
        }
    }

};



int main()
{
    Graph<string> india;
    india.addEdge("Amritsar","Delhi",1);
    india.addEdge("Amritsar","Jaipur",4);
    india.addEdge("Jaipur","Delhi",2);
    india.addEdge("Jaipur","Mumbai",8);
    india.addEdge("Bhopal","Agra",2);
    india.addEdge("Mumbai","Bhopal",3);
    india.addEdge("Agra","Delhi",1);
    //india.printAdj();

    india.dijisktraSSSP("Amritsar");

    return 0;


}



