//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, cases = 1; cin >> t;
    while(t--) {
        int n, k, p; cin >> n >> k >> p;
        int arr[n];
        for (int i = 0; i < n; i++) arr[i] = i + 1;
        k--;
        while(p--) {
            k = (k + 1) % n;
        }

        printf("Case %d: %d\n", cases++, arr[k]);
    }
    return 0;
}