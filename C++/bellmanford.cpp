/*
Bellman Ford algorithm in cpp 
Author:Neetu Kumari
*/

#include<bits/stdc++.h>
using namespace std;

const int infinity = 1e9;

int main() {
  int n, m;
  cin >> n >> m;
  vector < vector < int > > edges;
  for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    edges.push_back( { u, v, w } );
  }
  int source;
  cin >> source;
  vector < int > dist(n, infinity);
  dist[source] = 0;
  for (int i = 0; i < n - 1; i++) {
    for (auto e: edges) {
      int u = e[0];
      int v = e[1];
      int w = e[2];
      dist[v] = min(dist[v], w + dist[u]);
    }
  }
  for (auto i: dist)
    cout << i << " " << endl;
}


/* sample input for a graph
5 8
1 2 5
3 2 4
1 3 6
3 1 -1 
1 4 1
0 2 3
4 3 4
0 1 -2
0
Output: 0 -2 3 3 -1
*/
