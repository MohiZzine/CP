#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adjList(100010);

int main() {
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        int a, b; scanf("%d%d", &a, &b);
        adjList[b].push_back(a);
    }


    return 0;
}