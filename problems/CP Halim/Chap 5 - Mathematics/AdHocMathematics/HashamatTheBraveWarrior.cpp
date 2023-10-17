//
// Created by ADMIN on 17/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    while(scanf("%lld %lld", &n, &m) == 2) {
        cout << abs(m - n) << endl;
    }
    return 0;
}