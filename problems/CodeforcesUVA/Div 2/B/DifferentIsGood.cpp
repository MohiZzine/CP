#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    if (n > 26) {
        cout << -1;
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; i < n; i++) freq[s[i] - 'a']++;
    int ans = 0;
    for (int i = 0; i < 26; i++) if (freq[i]) {
        ans += (freq[i] - 1);
    }
    cout << ans;
    return 0;
}