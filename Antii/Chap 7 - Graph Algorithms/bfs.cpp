#include <bits/stdc++.h>

using namespace std;

/*
  Breadth-first search is more difficult to implement than depth-first
  search, because the algorithm visits nodes in different parts of the graph. A typical
  implementation is based on a queue that contains nodes. At each step, the next node
  in the queue will be processed.
*/

queue<int> q;
bool visited[N];
int distance[N];

// The queue q contains nodes to be processed in increasing order of their distance.
// The array visited indicates which nodes the search has already visited
// The array distance will contain the distances from the starting node (namely x) to all nodes of the graph.

int main() {

  visited[x] = true;
  distance[x] = 0;
  q.push(x);
  while(!q.empty()) {
    int s = q.front(); q.pop();
    // process node s
    for (auto u: adj[s]) {
      if (visited[u]) continue;
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }


  return 0;
}