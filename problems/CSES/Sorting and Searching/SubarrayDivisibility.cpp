#include <bits/stdc++.h>

using namespace std;

int n;
int modn (int a) {
    return (a % n + n) % n;
}

int main() {
    scanf("%d", &n);
    vector<int> nums(n);
    int k;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &k);
        if (i) nums[i] = modn(k + nums[i - 1]);
        else nums[i] = modn(k);
    }

    long long ans = 0;
    map<int, long long> occur;
    for (int i = 0; i < n ; ++i) {
        occur[nums[i]]++;
    }

    for (auto x: occur) {
        if (x.first == 0) ans += x.second;
        ans += (x.second * (x.second - 1)) / 2;
    }

    printf("%lld", ans);
    return 0;
}