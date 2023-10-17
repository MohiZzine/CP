#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d; cin >> a >> b >> c >> d;
    int part = b - a + d - c;
    int intersect = max(min(b, d) - max(a, c), 0);
    cout << part - intersect;
    return 0;
}