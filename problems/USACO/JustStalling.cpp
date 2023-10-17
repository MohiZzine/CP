#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long used = 0, ans = 1;
    vector<int> a(n), h(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> h[i];

    sort(begin(a), end(a));
    sort(begin(h), end(h));

    int k = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        while(k >= 0 && h[k] >= a[i]) k--;
        if (k < 0) ans *= (n - used);
        else ans *= (n - k - 1 - used);
        used++;
    }

    cout << ans;
    return 0;
}