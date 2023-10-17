#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int z1, t1, z2, t2; cin >> z1 >> t1 >> z2 >> t2;
    int a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;

    int first = (x2 - x1) * (y2 - y1), second = (z2 - z1) * (t2 - t1);
    int intersect1 = max(min(y2, b2) - max(y1, b1), 0) * max(min(x2, a2) - max(x1, a1), 0);
    int intersect2 = max(min(t2, b2) - max(t1, b1), 0) * max(min(z2, a2) - max(z1, a1), 0);

    cout << first + second - intersect1 - intersect2;
    return 0;
}