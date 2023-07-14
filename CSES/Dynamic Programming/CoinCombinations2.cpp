//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef long long ll;

ll value[1000050];
unordered_set<int> coins;
multiset<int> sol;
set<multiset<int>> used;
//set<int> sol;

ll solve(int x) {
    if (value[x] != -1) return value[x];
    if (x == 0) {
        if (used.count(sol)) return 0;
        used.insert(sol); return 1;
    }
    value[x] = 0;
    for (int c: coins) {
        if (x - c >= 0) {
            value[x] += solve(x - c) % MOD;
            sol.insert(c);
        }
    }
    sol.clear();
    return value[x] % MOD;
}

int main() {
    memset(value, -1, sizeof value);
    int n, x;
    cin >> n >> x;
    while(n--) {
        int k; cin >> k;
        coins.insert(k);
    }
    printf("%lld", solve(x));

    return 0;
}