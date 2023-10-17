//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, ans = 0; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < (1 << n); i++) {
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) sum += arr[j];
        }
        if (sum == k) ans++;
    }
    cout << ans;
    return 0;
}