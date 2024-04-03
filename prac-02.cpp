/* Write a C++ program to Represent the following graphs using an adjacency
List (Figure 1). */
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

#include<bits/stdc++.h>
using namespace std;
int main(){
    int node, edge ;
    cout<<"Enter the number of nodes: ";
    cin>>node;
    vector<int> graph[node+1];
    cout<<"Enter the number of edges: ";
    cin>>edge;
    int u,v;
    for (int i = 0; i < edge; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 0; i < node; i++)
    {
        cout<<i <<"-->";
        for (auto it: graph[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    

} 