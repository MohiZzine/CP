#include <bits/stdc++.h>

using namespace std;

int main() {
    int freq[26] = {0};
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        if (islower((int)s[i])) freq[s[i] - 'a']++;
        else freq[s[i] - 'A']++;
    }
    bool ok = true;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            ok = false; break;
        }
    }
    if (ok) cout << "YES";
    else cout << "NO";
    return 0;
}