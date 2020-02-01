#include<bits/stdc++.h>
using namespace std;
#define INF 10000
int pre[1000];

class Graph
{
    int V;
    list<int>*adj;

public:
    Graph(int V);

    void addEdge(int a,int b);

    void BFS(int source);

};

Graph::Graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}

void Graph::addEdge(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void Graph::BFS(int source)
{
    bool *visited=new bool[V];
    vector<int>dist(V,INF);

    for(int i=0; i<V; i++)
    {
        visited[i]=false;
    }

    list<int>q;
    list<int>::iterator i;

    visited[source]=true;
    q.push_back(source);
    dist[source]=0;
    pre[source]=-1;

    while(!q.empty())
    {
        int s=q.front();
        ///cout<<s<<" ";
        q.pop_front();

        for(i=adj[s].begin(); i!=adj[s].end(); i++)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                dist[*i]=dist[s]+1;
                pre[*i]=s;
                q.push_back(*i);
            }
        }
    }

    cout<<endl;
    printf("Distance from source to every vertex:\n");
    printf("Vertex\t\tDistance\n");
    for(int i=0; i<V; i++)
    {
        printf("  %d\t\t  %d\n",i,dist[i]);
    }


}

void printpath(Graph g,int s,int e)
{
    if(e==s)
    {
        cout<<s<<" ";
    }

    else if(pre[e]==-1)
    {
        cout<<"No path"<<endl;
    }
    else
    {
        printpath(g,s,pre[e]);
        cout<<e<<" ";
    }
}

int main()
{
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(4,5);
    g.addEdge(2,5);

    g.BFS(0);
    printpath(g,0,4);

    return 0;
}
