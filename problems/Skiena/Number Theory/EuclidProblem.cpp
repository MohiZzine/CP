#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll x, y, d;
void euclid(ll p, ll q) {

    if (q == 0) {
        x = 1;
        y = 0;
        d = p;
        return;
    }

    euclid(q, p % q);

    ll x1, y1;

    x1 = y;
    y1 = x - p / q * y;
    x = x1;
    y = y1;
}

int main() {
    ll A, B;
    while(scanf("%lld%lld", &A, &B) != EOF) {
        if (A == 0) swap(A, B);
        euclid(A, B);
        cout << x << " " << y << " " << d << endl;
    }

    return 0;
}