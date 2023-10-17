#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y; cin >> x >> y;
    int d = 1, par = 0, ans = 0, curr = x;
    if (x == y) cout << 0;
    else if (x < y) {
        while(true) {
            if (x + (1 << d) * (par == 0 ? 1: -1) >= y)
            else {
                cur += (1 << d);
                ans = (cur + (1 << d))
            };
        }
    }
    return 0;
}