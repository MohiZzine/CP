#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    scanf("%d%d", &n, &x);

    vector<pair<long long, int>> vect(n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &vect[i].first);
        vect[i].second = i + 1;
    }

    sort(vect.begin(), vect.end());

    int l = 0, r = n - 1;
    while(l < r) {
        if (vect[l].first + vect[r].first == x) break;
        else if (vect[l].first + vect[r].first > x) r--;
        else l++;
    }

    if (r == l) printf("IMPOSSIBLE");
    else {
        int a = vect[l].second, b = vect[r].second;
        printf("%d %d", a > b ? b: a, a > b ? a: b);
    }

    return 0;
}