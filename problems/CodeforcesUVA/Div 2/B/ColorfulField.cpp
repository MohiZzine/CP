#include <bits/stdc++.h>

using namespace std;


int main() {
    map<int, string> mp;
    mp[0] = "Carrots";
    mp[1] = "Kiwis";
    mp[2] = "Grapes";
    mp[-1] = "Waste";
    long long n, m, k, t; cin >> n >> m >> k >> t;
    int grid[n * m];
    memset(grid, 0, sizeof(grid));
    for (int i = 0; i < k; i++) {
        long long a, b; cin >> a >> b;
        a--; b--;
        grid[a * m + b] = -1;
    }

    long long i = 0, cnt = 0;
    while(cnt < n * m) {
        if (grid[cnt] != -1) {
            grid[cnt] = i;
            i++;
            i %= 3;
        }
        cnt++;
    }

    for (int j = 0; j < t; j++) {
        long long u, v; cin >> u >> v;
        u--; v--;
        cout << mp[grid[u * m + v]] << endl;
    }

    return 0;
}