//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

map<char, int> sol;
set<char> nodes;

int main() {
    int t, cases = 1; cin >> t;
    while(t--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (nodes.count(s[i])) nodes.insert(s[i]);
        }
        printf("Case %d\n", cases++);

    }
    return 0;
}