#include <bits/stdc++.h>

using namespace std;

double slope(pair<double, double> p1, pair<double, double> p2) {
    return (p1.first - p2.first) / (p1.second - p2.second);
}

int main() {
    double x0, y0;
    int n; cin >> n >> x0 >> y0;
    set<double> lines;
    int colinear = 0;

    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        if (b != y0) {
            lines.insert(slope({a, b}, {x0, y0}));
        } else  colinear++;
    }

    cout << (colinear ? 1: 0) + lines.size();
    return 0;
}