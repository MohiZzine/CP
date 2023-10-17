#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int k; cin >> k;
    int used = 0, cur = 0;
    while(used < k) {
        if (cur == s.size() - 1) break;
        int idx = -1;
        for (int j = cur + 1; j <= cur + k  - used && j < s.size(); j++) {
            if (s[j] > s[cur] && (idx != -1 ? s[j] > s[idx]: 1)) idx = j;
        }
        if (idx != -1) {
            used += idx - cur;
            for (int i = idx; i > cur; i--) swap(s[i], s[i - 1]);
        }
        cur++;
    }

    cout << s;
    return 0;
}