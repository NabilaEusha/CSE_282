/* Finding the shortest distance from the source to all the nodes. */
/*
node 4 edge 4
1 2
1 4
3 4
2 4
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int vis[100], dis[100];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    dis[source] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            // int nxt_node = it;
            if (!vis[it])
            {
                dis[it] = 1 + dis[node];
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}
int main()
{
    int node, edge;
    cout << "Enter the number of nodes: ";
    cin >> node;
    cout << "Enter the number of edges: ";
    cin >> edge;
    cout << "Enter the connection of edges: ";
    int u, v;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout << "Enter the source node: ";
    cin >> source;
    bfs(source);
    for (int i = source; i <= node; i++)
    {
        cout << "Distance from  node" << source << " to " << i << " is : " << dis[i] << endl;
    }
}