#include <bits/stdc++.h>

using namespace std;

int main() {
    long double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    long double x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
    if (x1 == x2) {
        if (x3 == x4) cout << "YES";
        else cout <<"NO";
    } else if (x3 == x4) {
        cout << "NO";
    } else {
        long double m1 = (y1 - y2) / (x1 - x2), m2 = (y3 - y4) / (x3 - x4);
        if (m1 == m2) cout << "YES";
        else cout << "NO";
    }
    return 0;
}