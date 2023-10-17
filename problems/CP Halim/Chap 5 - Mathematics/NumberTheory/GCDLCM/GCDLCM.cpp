#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc; cin >> tc;
    while(tc--) {
        long long g, l; cin >> g >> l;
        if (l % g != 0) {
            cout << -1 << "\n";
        }  else {
            cout << g << " " << l / g << "\n";
        }
    }
    return 0;
}