//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

unsigned long long MOD = 1e9 + 7;

unsigned long long fib[1000010];

//unsigned long long solve(int n) {
//    if (fib[n] != -1) return fib[n];
//    if (n == 0 || n == 1) return n;
//
//    return fib[n] = fib[n - 1] + fib[n - 2];
//}

int main() {
//    memset(fib, -1, sizeof(fib));
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 1000000; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;
    }

    int q; cin >> q;
    while(q--) {
        int N; cin >> N;
        cout << fib[N] << endl;
    }

    return 0;
}