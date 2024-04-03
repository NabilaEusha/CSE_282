/* Write a C++ program to find the traversal of the following graphs (Figure
1). */
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
const int N = 1e5;
vector<int> adj[N];
bool visited[N];
int main(){
    for (int i = 0; i < N; i++)
    {
        visited[i]=0;
    }
    
    int node, edge ;
    cout<<"Enter the number of nodes: ";
    cin>>node;
    cout<<"Enter the number of edges: ";
    cin>>edge;
    int u,v;
    cout<<"Enter the edge connection: "<<endl;
    for (int i = 0; i < edge; i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source;
    cout<<"Enter the source: ";
    cin>>source;
    queue<int> q;
    q.push(source);
    visited[source]=1;
   while (!q.empty())
   {
    int node = q.front();
    q.pop();
    cout<<node<<endl;
    vector<int> :: iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            visited[*it]=1;
            q.push(*it);
        }  
    } 
   }
  return 0; 
}