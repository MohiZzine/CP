#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;  cin >> n;
    int k1, k2; cin >> k1;
    queue<int> p1, p2;
    map<pair<int, int>, bool> vis;

    while(k1--) {
        int x; cin >> x;
        p1.push(x);
    }

    cin >> k2;
    while(k2--) {
        int x; cin >> x;
        p2.push(x);
    }

    int first = p1.front(), second = p2.front();
    vis[{first, second}] = true;
    int count = 0;
    bool ok = true;
    while(!p1.empty() && !p2.empty() && count < 1000000) {
        int u = p1.front(), v = p2.front(); p1.pop(), p2.pop();
        count++;
        if (u < v) p2.push(u), p2.push(v);
        else p1.push(v), p1.push(u);
    }

    if (count < 1000000) cout << count << " " << (p1.empty() ? 2: 1);
    else cout << -1;
    return 0;
}