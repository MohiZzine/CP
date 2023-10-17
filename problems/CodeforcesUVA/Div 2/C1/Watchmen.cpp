#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main() {
    int n; cin >> n;
    map<ull, ull> coordsX, coordsY;
    map<pair<ull, ull>, int> s;
    ull count = 0;
    for (int i = 0; i < n; i++) {
        ull x, y; cin >> x >> y;
        count += coordsX[x]++;
        count += coordsY[y]++;
        count -= s[{x, y}]++;
    }

    cout << count;
    return 0;
}