#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; cin >> q;
    set<int> s;
    while(q--) {
        string com; cin >> com;
        int x; cin >> x;
        if (com == "insert") {
            s.insert(x);
        } else if (com == "lower_bound") {
            printf("%d\n", s.lower_bound(x) != s.end() ? *s.lower_bound(x): -1);
        } else if (com == "upper_bound") {
            printf("%d\n", s.upper_bound(x) != s.end() ? *s.upper_bound(x): -1);
        } else {
            if (s.count(x)) cout << "found\n";
            else cout << "not found\n";
        }
    }
    return 0;
}