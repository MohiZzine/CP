#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, x; cin >> a >> b >> x;
    if (a > b) swap(a, b);


    long long s = b / x, t = a / x;
    cout << x * ((s * (s + 1)) / 2 - ((t - 1) * t) / 2);
    return 0;
}