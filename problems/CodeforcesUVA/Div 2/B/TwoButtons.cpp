#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int ans = 0;
    while(m != n) {
        if (m > n) {
            if (m & 1) m++;
            else m /= 2;
            ans++;
        }
        else if (m < n) m++, ans++;
    }

    cout << ans;
    return 0;
}