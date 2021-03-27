#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> adj[500005];
int N, M, Q;

const int INF = 1e9;
int dist[500005];
bool processed[500005];
void dijkstra(int start)
{
    priority_queue<pair<int,int>> q;
    for(int i=0; i<500005; i++)
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
                q.push({-dist[u],u});
            }
        }
    }
}

int main()
{
    scanf("%d%d%d", &N, &M, &Q);
    for(int a,b,w,i=0; i<M; i++)
    {
        scanf("%d%d%d", &a, &b, &w);
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }

    while(Q--)
    {
        int q;
        scanf("%d", &q);
        dijkstra(q);

        int max_dist=-1, counter=0;
        for(int i=0; i<N; i++)
            if(dist[i]==INF) 
                continue;
            else if(max_dist < dist[i])
                max_dist = dist[i], counter=1;
            else if(max_dist == dist[i])
                counter++;

        printf("%d %d\n", max_dist, counter);
    }
    return 0;
}