/* Find the shortest distance and path from an arbitrary source to an arbitrary
destination node. */
/*Graph a: nodes 8, edges 10
0 1
0 3
1 2
3 4
3 7
7 4
7 5
5 4
5 6
4 6

Graph b: nodes 9, edges 10
0 1
0 3
0 8
1 7
2 3
2 5
3 4
4 8
5 6
7 2
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> adj[100];
vector<int> path;
int vis[100], dis[100], parent[100];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;
    dis[source] = 0;
    parent[source] = -1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                dis[it] = 1 + dis[node];
                vis[it] = 1;
                parent[it] = node;
                q.push(it);
            }
        }
    }
}
void shortestPath(int d)
{
    if (d != -1)
    {
        int p = parent[d];
        path.push_back(d);
        shortestPath(p);
    }
}
int main()
{
    int node, edge;
   
        cout << "Enter the number of node: ";
        cin >> node;
        cout << "Enter the number of edge: ";
        cin >> edge;
        cout << "Enter the edge connections: " << endl;
        int u, v;
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int source, dest;
        cout << "Enter the source node : ";
        cin >> source;
        cout << "Enter the Destination Node:";
        cin >> dest;
        bfs(source);
        shortestPath(dest);
        reverse(path.begin(), path.end());
        cout << "Distance from " << source << " to " << dest << " is : " << dis[dest] << endl;
        cout << "Shortest path is:";
        for (auto it : path)
        {
            cout << it << " ";
        }
        cout << endl;
   
    return 0;
}