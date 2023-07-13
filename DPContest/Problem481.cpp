//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

vector<int> memo(1, 1);

int solve(vector<int> v, int N) {
    if (N == 0) return 1;
    bool smallest = false;
    for (int j = 0; j < N; j++) {
        if (v[N] <= v[j]) {
            smallest = true;
        }
        else {
            smallest = false;
        }
    }
    int m = 0, best = 1;
    for (int k = 0; k < N; k++) {
        m =
    }

}

int main() {
    int n, N = 0;
    vector<int> nums;
    while(scanf("%d", &n) != EOF) {
        N++;
        nums.push_back(n);
        solve(nums, N);
    }


    return 0;
}