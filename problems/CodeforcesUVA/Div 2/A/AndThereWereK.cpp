#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, sol; cin >> n;
        int tmp = n;
        while(true) {
            tmp &= (--n);
            if (tmp == 0) {
                sol = n;
                break;
            }
        }
        cout << sol << "\n";
    }

    return 0;
}