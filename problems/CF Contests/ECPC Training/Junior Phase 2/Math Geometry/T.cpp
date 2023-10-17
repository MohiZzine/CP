#include <bits/stdc++.h>

using namespace std;

int main() {
    long double x, y, r; cin >> x >> y >> r;
    int n; cin >> n;
    while(n--) {
        long double xi, yi; cin >> xi >> yi;
        long double dx = xi - x, dy = yi - y;
        if ((dx * dx + dy * dy) <= r * r) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}