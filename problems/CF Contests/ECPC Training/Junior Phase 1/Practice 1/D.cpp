#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(begin(v), end(v));

    int x = -m, i = 0;
    while(i < n && v[i] == x) {
        while(i < n && v[i] == x) i++;
        x++;
    }

    cout << x;
    return 0;
}