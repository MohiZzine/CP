//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int N, P; cin >> N >> P;
        int ans = 0;
        int arr[N + 1];
        for (int i = 1; i <= N; i++)
            arr[i] = 0;
        unordered_set<int> hartals;
        for (int i = 0; i < P; i++) {
            int x; cin >> x;
            hartals.insert(x);
        }

        for (int x: hartals) {
            for (int i = x; i <= N; i += x) arr[i]++;
        }

        for (int k = 1; k <= N; k++) {
            if (arr[k] > 0 && k % 7 != 0 && k % 7 != 6)
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}