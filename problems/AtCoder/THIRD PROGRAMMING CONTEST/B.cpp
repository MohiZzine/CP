#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; scanf("%d", &n);
    vector<pair<int, int>> x(n), y(n);
    for (int i =0; i < n; i++) {
        cin >> x[i].first >> x[i].second >> y[i].first >> y[i].second;
    }
    return 0;
}