#include <bits/stdc++.h>

using namespace std;


int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    int M = -1;

    for (int i = 0; i < n; i++) cin >> v[i].first;
    for (int i = 0; i < n; i++) cin >> v[i].second;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = v[i].first - v[j].first;
            int dy = v[i].second - v[j].second;
            int SquareDist = dx * dx + dy * dy;
            if (SquareDist > M) M = SquareDist;
        }
    }
    cout << M;
    return 0;
}