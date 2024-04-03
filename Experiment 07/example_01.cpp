/* Graph Representation using Adjacency List.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int nodes, edge, u, v;
    cout << "Enter number of nodes:";
    cin >> nodes;
    vector<int> graph[nodes + 1];
    cout << "Enter number of edges:";
    cin >> edge;
    for (int i = 0; i < edge; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int j = 0; j <= nodes; j++)
    {
        cout << j << " --> ";
        for (auto it : graph[j])
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
/* 
 for (vector<int>::iterator it = graph[j].begin(); it!=graph[j].end(); it++)
        {
            cout << *it << " ";
        }
*/