#include <bits/stdc++.h>

using namespace std;

int fact(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}

int main() {
    int k; cin >> k;
    while(k--) {
        int n; cin >> n;
        if (n >= 5) cout << 0 << endl;
        else cout << fact(n) % 10 << endl;
    }
    return 0;
}