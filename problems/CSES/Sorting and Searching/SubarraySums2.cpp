#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; scanf("%d%d", &n, &x);
    vector<long long> v(n);

    for (int i = 0; i < n; i++) scanf("%lld", &v[i]);
    sort(v.begin(), v.end());


    return 0;
}