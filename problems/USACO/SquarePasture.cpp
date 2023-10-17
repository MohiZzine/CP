#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;

    int side1 = max(a2, x2) - min(a1, x1), side2 = max(b2, y2) - min(b1, y1);
    cout << pow(max(side1, side2), 2);
    return 0;
}