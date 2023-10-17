#include <bits/stdc++.h>

using namespace std;

const unsigned long long MAX = 2ULL * 1000000000ULL + 1ULL;
vector<bool> nums(MAX + 1, true);
int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        fill(nums.begin(), nums.end(), true);
        int ans = n;
        for (int i = 0; i < m; i++) {
            int a; cin >> a;
            if (a == 1) {
                fill(nums.begin(), nums.end(), false);
            }
            else {
                for (int j = a; j <= n; j += a) {
                    if (nums[j]) nums[j] = false, ans--;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}