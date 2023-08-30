//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cases = 1; cin >> n;
    while(n--) {
        int M; cin >> M;
        string s, ans = ""; cin >> s;
        for (int i = 0; i < s.size(); i++)
            if (i != M - 1) ans += s[i];
        cout << cases++ << " ";
        cout << ans << endl;
    }
    return 0;
}