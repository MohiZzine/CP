#include <bits/stdc++.h>

using namespace std;

// The function assumes the graph is stored in an adjacency list
vector<int> adj[N];

// It also maintains an array to keep track of visited nodes
bool visited[N];

void dfs(int s) {
  if (visited[s]) return;
  visited[s] = true;
  // process node s
  for (auto u: adj[s]) {
    dfs(u);
  }
}

int main() {

  return 0;
}