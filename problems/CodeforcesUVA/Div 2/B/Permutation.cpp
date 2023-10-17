#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0; cin >> n;
    int f[5010];
    memset(f, -1, sizeof f);
    for (int i = 0;i < n; i++) {
        int k; cin >> k;
        if (f[k] != -1 || k > n) count++;
        else f[k] = 0;
        f[k]++;
    }

    cout << count;
    return 0;
}