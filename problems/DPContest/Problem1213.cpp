//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int dp[1125][16];
set<int> primes, nums;

bool prime(int x) {
    for (int k = 2; k * k <= x; k++) {
        if (x % k == 0) return false;
    }
    return true;
}

int solve(int n, int k) {
    if (dp[n][k] != -1) return dp[n][k] && (nums.count(n) ? 0: 1);
    if (n == 1 || n == 0) {
        return 0;
    }
    if (k == 1) {
        if (primes.count(n)) {
            dp[n][1] = 1;
            if (!nums.count(n))
                return 1;
            return 0;
        } else {
            dp[n][1] = 0;
            return 0;
        }
    }

    for (int p: primes) {
        if (p <= n / k && !nums.count(p)) {
//            cout << p << endl;
//            printf("solve(%d,%d) = %d\n", n - p, k - 1, solve(n - p, k - 1));
            if (solve(n - p, k - 1)) {
                nums.insert(p);
                if (dp[n][k] != -1) dp[n][k]++;
                else dp[n][k] = 1;
            }
        }
        nums.clear();
    }
    return (dp[n][k] == -1) ? 0: dp[n][k];
}

int main() {
    int n, k;
    for (int i = 0; i < 1125; i++) for (int j = 0; j < 16; j++)
        dp[i][j] = -1;
    for (int i = 2; i < 1125; i++) {
        if (prime(i)) {
            primes.insert(i);
        }

    }



    while(scanf("%d %d", &n, &k), (n | k)) {
        printf("%d\n", solve(n, k));
    }

    return 0;
}
