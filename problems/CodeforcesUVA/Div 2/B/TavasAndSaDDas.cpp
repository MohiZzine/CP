#include <bits/stdc++.h>

using namespace std;



int main() {
    string s; cin >> s;
    reverse(s.begin(), s.end());

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4') ans += pow(2, i);
        else ans += pow(2, i + 1);
    }

    cout << ans;
    return 0;
}