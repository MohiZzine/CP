//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

long long const MAX = 200000000;

int dp[MAX];

bool simplify(int k) {
    while(k % 2 == 0) k /= 2;
    while(k % 3 == 0) k /= 3;
    while(k % 5 == 0) k /= 5;
    return k == 1;
}

int main() {
//    memset(dp, 0, sizeof(dp));
//    dp[1] = dp[2] = dp[3] = dp[5] = 1;
//    for (int i = 2; i < MAX; i++) {
//        if (dp[i] == 1) {
//            if (i * 2 < MAX) dp[i * 2] = 1;
//            if (i * 3 < MAX) dp[i * 3] = 1;
//            if (i * 5 < MAX) dp[i * 5] = 1;
//        }
//    }
    int count = 1, i = 859963392;
//    for (;; i++) {
//        if (dp[i] == 1) count++;
//        if (count == 1500) break;
//    }
    printf("The 1500'th ugly number is %d.\n", i);
    return 0;
}