#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    while(q--) {
        string s; cin >> s;
        if (s == "sort") {
            int l, r; cin >> l >> r;
            sort(v.begin() + (--l), v.begin() + r);
        } else if (s == "pop_back") v.pop_back();
        else if (s == "back") cout << v[v.size() - 1] << "\n";
        else if (s == "front") cout << v[0] << "\n";
        else if (s == "reverse") {
            int l, r; cin >> l >> r;
            reverse(v.begin() + (--l), v.begin() + r);
        } else if (s == "print") {
            int pos; cin >> pos;
            cout << v[--pos] << "\n";
        } else if (s == "push_back") {
            int x; cin >> x;
            v.push_back(x);
        }
    }
    return 0;
}