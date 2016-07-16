#include<bits/stdc++.h>
using namespace std;
class UnweightedUndirectedGraph
{
    vector<list<int> > adjList;
public:
    UnweightedUndirectedGraph(int v)
    {
        adjList.resize(v);
    }
    bool addEdge(int src,int dest)
    {
        int maxi=max(src,dest);
        if(maxi>=adjList.size())
        {
            adjList.resize(maxi+1);
        }
        if(find(adjList[src].begin(),adjList[src].end(),dest)!=adjList[src].end())
        {
            return false;
        }
        adjList[src].push_back[dest];
        adjList[dest].push_back[src];
        return true;
    }
    void BFS()
    {
        vector<bool> visited
    }
};
int main()
{
    return 0;
}
