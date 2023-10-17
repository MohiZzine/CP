#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum, limit; cin >> sum >> limit;
    set<int> s;
    for (int i = 0; i <= log2(sum); i++) {
        if ((1 << i) & sum) {
            s.insert(1 << i);
        }
    }

    if (limit < s.size()) {
        cout << -1; return 0;
    }

    for (int x: s) cout << x << " ";
    return 0;
}