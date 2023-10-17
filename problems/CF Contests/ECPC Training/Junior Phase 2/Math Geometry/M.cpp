#include <bits/stdc++.h>

using namespace std;

int main() {
    string n; cin >> n;
    long long x, p = 1; cin >> x;
    long long res = 0, i = 0;
    reverse(n.begin(), n.end());
    while(i < n.size()) {
        res += (n[i] - '0') * p;
        res %= x;
        p = (p * 10) % x;
        i++;
    }

    if (res == 0) cout << "YES";
    else cout << "NO";
    return 0;
}