//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

#define MAX 10000000;

int dp[1005], best;
set<int> cuts;

int minPrice(int start, int end) {
    if (dp[end - start] != -1) return dp[end - start];
    bool lastCut = true;
    set<int> possible;
    for (int x: cuts) {
        if (x < end && x > start) {
            possible.insert(x);
            lastCut = false;
        }
    }

    if (lastCut) {
        return 0;
    } else {
        best = MAX;
        for (int x: possible) {
            best = min(best, minPrice(start, x) + minPrice(x, end)) + end - start;
        }
        dp[end - start] = best;
        return dp[end - start];
    }
}

int main() {
    memset(dp, -1, sizeof(dp));
//    for (int i = 0; i < 1005; i++)
//        dp[i] = -1;
    int l;
    while(scanf("%d", &l), l) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            cuts.insert(k);
        }
        best = 0;
        printf("The minimum cutting is %d\n", minPrice(0, l));
        cuts.clear();
    }

    return 0;
}