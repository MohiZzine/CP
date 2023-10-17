#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    long long ans = 0;
    vector<int> ids;
    for (int i = 0; i + 3 < s.size(); i++) {
        if (s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r') ids.push_back(i);
    }

    for (int i = 0; i < ids.size(); i++) {

    }

    return 0;
}