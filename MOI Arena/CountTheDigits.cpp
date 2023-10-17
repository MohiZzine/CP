//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

unsigned long long Pow(int x, int k) {
    if (k == 0) return 1;
    unsigned long long X = Pow(x, k / 2) * Pow(x, k / 2);
    if (k & 1) X *= x;
    return X;
}

int main() {
    int t; cin >> t;
    while(t--) {
        unsigned long long n;
        long long ans = 0;
        int b;
        cin >> n >> b;
        if (n == 0) {
            cout << 1 << endl;
            continue;
        }
        unsigned long long pow = Pow(b, i);
        while(pow) {
            unsigned long long temp = n - pow + 1;
            temp *= (int)(log(pow) / log(b) + 1);
            ans += temp;
            n = pow - 1;
            pow /= b;
        }
        cout << ++ans << endl;
    }
    return 0;
}