#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; scanf("%d", &n);
    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; ++i) scanf("%d", &nums[i].first), nums[i].second = i;

    sort(nums.begin(), nums.end());

    int rounds = 1, counted = 0;
    while(counted < n) {
        while(counted < n - 1 && nums[counted].second < nums[counted + 1].second) ++counted;
        if (counted >= n - 1) break;
        if (nums[counted].second > nums[counted + 1].second) rounds++, counted++;
    }

    printf("%d", rounds);
    return 0;
}