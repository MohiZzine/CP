#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 + 5;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int n, q;

vector<vii> adjList(MAX);


int main() {
    cin >> n >> q;
    for (int i = 0; i < n - 1; i++) {
        int u, v, r; cin >> u >> v >> r;
        adjList[u].emplace_back(v, r);
        adjList[v].emplace_back(u, r);
    }

    while(q--) {
        int k, v; cin >> k >> v;
        stack<int> st;
        st.push(v);
        while(!st.empty()) {
            int u = st.top();

        }
    }
    return 0;
}