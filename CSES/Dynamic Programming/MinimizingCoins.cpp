//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

#define INF 10000000

int value[1000050];
unordered_set<int> coins;

int solve(int x) {
    if (value[x] != -1) return value[x];
    if (x == 0) return 0;
    int best = INF;
    for (int c: coins) {
        if (x - c >= 0 && value[x] != INF)
            best = min(best, solve(x - c) + 1);
    }
    value[x] = best;
    return best;
}

int main() {
    memset(value, -1, sizeof value);
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        coins.insert(c);
    }
//    for (int k = 0; k < n; k++) {
//        value[k] = INF;
//        for (auto c: coins) {
//            if (k - c >= 0)
//                value[k] = min(value[k], value[k - c] + 1);
//        }
//    }
//    printf("%d ", x);
    if (solve(x) == INF)
        printf("-1");
    else
        printf("%d", solve(x));
    return 0;
}
