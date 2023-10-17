#include <bits/stdc++.h>

using namespace std;

int main() {
    int up[26] = {0}, low[26] = {0};
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) low[s[i] - 'a']++;
        else up[s[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (up[i]) cout << (char)('A' + i) << " " << up[i] << "\n";
    }
    for (int i = 0; i < 26; i++) {
        if (low[i]) cout << (char)('a' + i) << " " << low[i] << "\n";
    }
    return 0;
}