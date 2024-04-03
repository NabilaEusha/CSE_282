#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int vis[N];
vector<int> adj[N];
int main()
{
    for (int i = 0; i < N; i++)
    {
        vis[i] = 0;
    }
    int n, m;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;
    int x, y;
    cout << "Enter the edge connections: " << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source;
    cout << "Enter the Source Node: " << endl;
    cin >> source;
    queue<int> q;
    q.push(source); // jei graph niye kaj kortesi otar root 1 assume krsi
    vis[source] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << endl;
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!vis[*it])
            {
                vis[*it] = 1;
                q.push(*it);
            }
        }
    }

    return 0;
}