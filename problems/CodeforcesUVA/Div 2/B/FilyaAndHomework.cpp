#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long sum = 0;
    vector<long long> v(n);
    set<long long> s;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        s.insert(v[i]);
    }

    if (s.size() == 1 || s.size() == 2) {
        puts("YES");
        return 0;
    } else if (s.size() == 3) {
        int i = 0;
        for (auto x: s) {
            if (i & 1) sum -= 2 * x;
            else sum += x;
            i++;
        }
        if (sum == 0) {
            puts("YES");
            return 0;
        } else {
            puts("NO");
            return 0;
        }
    } else {
        puts("NO");
        return 0;
    }
    return 0;
}