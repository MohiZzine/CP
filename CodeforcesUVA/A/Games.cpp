//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int h[n], g[n];
    for (int i = 0; i <n; i++)
        cin >> h[i] >> g[i];

    int ans = 0;
    for (int k = 0; k < n; k++) {
        for (int j = 0; j != k && j < n; j++) {
            if (h[j] == g[k]) ans++;
            if (h[k] == g[j]) ans++;
        }
    }
    printf("%d", ans);
    return 0;
}