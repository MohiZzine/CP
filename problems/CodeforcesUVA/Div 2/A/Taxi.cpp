//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int t = 0;
    while(true) {
        if (a + b*t >= c - d*t) {
            printf("%d", a + b*t);
            break;
        }
        if (c - d * t <= a + b * (t + 1)) {
            printf("%d", c - d * t);
            break;
        }
        t++;
    }
    return 0;
}