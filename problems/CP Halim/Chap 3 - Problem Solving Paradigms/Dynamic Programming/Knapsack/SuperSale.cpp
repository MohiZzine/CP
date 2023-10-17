#include <bits/stdc++.h>

using namespace std;

int dp[1050], best, n, p[110], w[35];

int solve(int id, int remWeight) {
    if (dp[remWeight] != -1) return dp[remWeight];
    if (id == n) return 0;

    if (w[id] > remWeight) dp[remWeight] = max(dp[remWeight], solve(id + 1, remWeight));
    else if (w[id] <= remWeight) dp[remWeight] = max(solve(id + 1, remWeight), solve(id + 1, remWeight - w[id]) + p[id]);
    return dp[remWeight];
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> p[i] >> w[i];

        int g; cin >> g;
        int pers[g];
        for (int i = 0; i < g; i++)
            cin >> pers[i];



        best = 0;
        for (int j = 0; j < g; j++) {
            memset(dp, -1, sizeof(dp));
            best += solve(0, pers[j]);
        }

        cout << best << endl;
    }
    return 0;
}