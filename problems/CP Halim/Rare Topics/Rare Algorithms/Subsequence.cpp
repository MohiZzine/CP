#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    while(scanf("%d%d", &n, &s) != EOF) {
        long long arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int l = 0, r = 0, cur = arr[0], best = 1;
        while(r < n - 1) {
            if (cur + arr[r + 1] >= s) {
                r++;
                cur += arr[r];
                best = min(best, r - l + 1);
            } else {
                
            }
        }
    }
    return 0;
}