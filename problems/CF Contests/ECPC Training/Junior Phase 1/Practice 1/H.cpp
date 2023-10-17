#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int freq[s.size()];
    int cur = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') cur++;
        freq[i] = cur;
    }
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        if (l == 1) cout << freq[--r] << "\n";
        else cout << freq[--r] - freq[--l - 1] << "\n";
    }
    return 0;
}