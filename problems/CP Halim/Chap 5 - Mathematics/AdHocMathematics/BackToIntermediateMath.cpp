//
// Created by ADMIN on 17/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T, cas = 1; cin >> T;
    while(T--) {
        double d, v, u, t1, t2;
        cin >> d >> v >> u;
        printf("Case %d: ", cas++);
        if (v == 0 || u == 0 || v >= u) printf("can't determine\n");
        else {
            t1 = d / sqrt(u*u - v*v);
            t2 = d / u;
            printf("%.3lf\n", fabs(t1 - t2));
        }

    }

    return 0;
}