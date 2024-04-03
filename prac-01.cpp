/* Write a C++ program to Represent the following graphs using an adjacency
matrix (figure 1) */
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

int main()
{
    int num;
    cout << "Number of graph: ";
    cin >> num;
    for(int i=1; i<= num; i++)
    {
        cout << "Graph no" << i << " : " << endl;
        int node, edge, v, u;
        cout << "Enter the number of nodes: ";
        cin >> node;
        
        cout << "Enter the number of edges: ";
        cin >> edge;
        int matrix[node][node];
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                matrix[i][j] = 0; // storing 0 in the full matrix
            }
        }
        cout << "Enter the edge connection : " << endl;
        for (int i = 0; i < edge; i++)
        {
            cin >> u >> v;
            matrix[u][v] = 1;
            matrix[v][u] = 1;//graph is undirected
        }
        cout << "Adjacency matrix" << endl;
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}