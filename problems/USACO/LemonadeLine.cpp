#include <bits/stdc++.h>

using namespace std;

int const MAX = 1e8;

int main() {

    freopen("lemonade.in", "r", stdin);
    freopen("lemonade.out", "w", stdout);
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(begin(v), end(v), greater<int>());

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= i) count++;
        else break;
    }

    cout << count;
    return 0;
}