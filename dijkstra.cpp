//N*logM

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
vector<pair<int,int>> adj[200005];

int dist[200005];
bool processed[200005];
void dijkstra(int start)
{
    priority_queue<pair<int,int>> q;
    for(int i=0; i<200005; i++)
        dist[i]=INF, processed[i]=false;

    dist[start] = 0;
    q.push({dist[start],start});

    while(!q.empty())
    {
        int v=q.top().second; q.pop();

        if(processed[v]) continue;
        processed[v]=true;
        for(auto e : adj[v])
        {
            int u=e.first, w=e.second;
            if(dist[v]+w < dist[u])
            {
                dist[u] = dist[v] + w;
                q.push({-dist[u],u}); //q.push( make_pair(-dist) );
            }
        }
    }
}