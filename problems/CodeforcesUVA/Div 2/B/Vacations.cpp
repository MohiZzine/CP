#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int dp[n][3];
    memset(dp, 0, sizeof dp);

//    if (v[0] == 3)

   if (v[0] == 1 || v[0] == 3) dp[0][1]++;
   if (v[0] == 2 || v[0] == 3) dp[0][2]++;

   for (int i = 1; i < n; i++) {
       dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
       dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]);
       dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]);
       if (v[i] == 1) dp[i][1]++;
       if (v[i] == 2) dp[i][2]++;
       if (v[i] == 3) dp[i][1]++, dp[i][2]++;
   }

    int m = -1;
    for (int x: dp[n - 1]) {
        m = max(m, x);
    }

    cout << n - m;

    return 0;
}