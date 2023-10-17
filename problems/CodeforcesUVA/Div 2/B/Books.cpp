#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t; cin >> n >> t;
    vector<long long> nums(n);
    for (int i = 0; i < n; ++i) scanf("%lld", &nums[i]);
    int l = 0, r = 0, ans = 0, timeNeeded = nums[0];
    while(r < n - 1) {
        if (nums[r + 1] + timeNeeded <= t) timeNeeded += nums[++r], ans = max(ans, r - l + 1);
        else timeNeeded -= nums[l++];
    }

    if (n == 1) {
        if (nums[0] > t) printf("0");
        else printf("1");
    } else {
        printf("%d\n", max(ans, r - l + 1));
    }
    return 0;
}