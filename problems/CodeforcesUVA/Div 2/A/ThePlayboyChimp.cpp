#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int q; cin >> q;
    while(q--) {
        int h; cin >> h;
        auto first = lower_bound(begin(v), end(v), h), second = upper_bound(begin(v), end(v), h);
        if (first == v.begin()) cout << "X";
        else cout << *(--first);
        cout << " ";
        if (second == v.end()) cout << "X";
        else cout << *second;
        cout << "\n";
    }
    return 0;
}