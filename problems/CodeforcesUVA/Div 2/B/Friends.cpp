#include <bits/stdc++.h>

using namespace std;

int count;

vector<vector<int>> adj(6);

int main(){
    int m; cin >> m;
    while(m--) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool ok = false;

    for (int i = 1; i <= 5; i++) {
        if (adj[i].size() != 2) {
            ok = true;
            break;
        }
    }

    if (ok) cout << "WIN";
    else cout << "FAIL";
    return 0;
}