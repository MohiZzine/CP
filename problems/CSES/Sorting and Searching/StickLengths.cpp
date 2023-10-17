#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, median; cin >> n;
    long long cost = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    median = v[n / 2];
    for (int x: v) {
        cost += abs(x - median);
    }

    cout << cost;
    return 0;
}