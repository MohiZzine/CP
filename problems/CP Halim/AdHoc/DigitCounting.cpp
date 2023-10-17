//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int memo[100000];

int solve(int num) {
    if (memo[num] != -1) return memo[num];
    else {
        if (num < 10) return memo[num];
        else {
            while(num > 0) {
                memo[num] += 
            }
        }
    }
}

int main() {
    memset(memo, -1, sizeof(memo));
    for (int i = 1; i < 10; i++) {
        memo[i] = 1;
    }
    int N; cin >> N;
    while(N--) {
        int num; cin >> num;
        cout << solve(num) << endl;
    }

    return 0;
}
