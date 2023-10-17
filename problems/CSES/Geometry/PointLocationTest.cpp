#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        long double z = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
        if (z < 0) cout << "RIGHT";
        else if (z > 0) cout << "LEFT";
        else cout << "TOUCH";
        cout << "\n";
    }
    return 0;
}