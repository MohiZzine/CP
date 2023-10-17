#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

vector<vector<int>> outList(505), inList(505);
vector<int> weights(505), d(505, -1);
long long total;

long long bfs_max(int x) {
    long long best = -weights[x];
    queue<int> q;
    q.push(x);
    d[x] = 0;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for (int k = 0; k < outList[u].size(); k++) {
            int v = outList[u][k];
            if (d[v] == -1) {
                d[v] = d[u] + 1;
                q.push(v);
                best -= weights[v];
            }
        }
    }

    for (int i = 0; i < inList[x].size(); i++) best -= weights[inList[x][i]];
    best += total;
    return best;
}

int main() {
    int v, e, cases = 1;
    while(scanf("%d%d", &v, &e), v | e) {
        total = 0;
        printf("Case #%d:\n", cases++);
        for (int i = 1; i <= v; i++) {
            int a; scanf("%d", &a);
            weights[i] = a;
            total += a;
        }

        for (int i = 0; i < e; i++) {
            int x, y; scanf("%d%d", &x, &y);
            outList[x].push_back(y);
            inList[y].push_back(x);
        }


        int q; scanf("%d", &q);
        for (int i = 0; i < q; i++) {
            d.assign(505, -1);
            int vertex; scanf("%d", &vertex);
            printf("%lld\n", bfs_max(vertex));
        }
        printf("\n");
        for (int i = 1; i <= v; i++) outList[i].clear(), inList[i].clear();
    }

    return 0;
}