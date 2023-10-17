#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k; cin >> n >> m >> k;
    long long arr[n + 1], B[n + 1];
    for (int i = 1; i <= n; i++) cin >> arr[i];
    arr[0] = 0;
    int vals[m + 1], reps[m + 1];
    memset(reps, 0, sizeof reps);
    memset(B, 0, sizeof B);
    pair<int, int> ranges[m];

    for (int i = 1; i <= m; i++) {
        cin >> ranges[i].first >> ranges[i].second >> vals[i];
    }

    for (int i = 0; i < k; i++) {
        int l, r; cin >> l >> r;
        reps[l]++;
        if (r < m) reps[r + 1]--;
    }

    long long int tmp = 0;

    for (int i = 1; i <= m; i++) {
        tmp += reps[i];
        B[ranges[i].first] += vals[i] * tmp;
        if (ranges[i].second < m) B[ranges[i].second + 1] -= vals[i] * tmp;
    }

    tmp = 0;
    for (int i = 1; i <= n; i++) {
        tmp += B[i];
        if (i == 1) cout << tmp + arr[i];
        else printf(" %lld", tmp + arr[i]);

    }
    return 0;
}