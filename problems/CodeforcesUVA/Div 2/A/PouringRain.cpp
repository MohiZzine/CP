//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

const double pi = acos(-1.0);

int main() {
    double d, h, v, e; cin >> d >> h >> v >> e;
    double p, a;
    p = (d * d * e * pi) / 4.0;
    a = (d * d * h * pi) / 4.0;

    if (p < v) {
        double t = a / (v - p);
        printf("YES\n");
        printf("%.10lf\n", t);
    } else {
        printf("NO\n");
    }

    return 0;
}