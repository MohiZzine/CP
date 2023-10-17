#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int count = 0;
    set<int> s;
    vector<int> idx;
    for (int i = 0; i < n; i++) {
        count++;
        int x; cin >> x;
        if (s.count(x)) continue;
        s.insert(x);
        idx.push_back(count);
    }

    if (s.size() < k) cout << "NO";
    else {
        cout << "YES\n";
        for (int i = 0; i < k; i++) cout << idx[i] << " ";
    }
    return 0;
}