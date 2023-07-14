//
// Created by Student on 14/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int fact(int x) {
    if (x == 0 || x == 1) return 1;
    return x * fact(x - 1);
}

int main() {
    int k, distinct = 0;
    string s; cin >> s;
    map<char, int> dist;
    set<string> possible;
    for (int i = 0; i < s.size(); i++) {
        distinct++;
        dist[s[i]]++;
    }
    k = fact(s.size());
    for (auto x: dist) {
        k /= fact(x.second);
    }
    printf("%d\n", k);
    sort(s.begin(), s.end());
    do{
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));

    return 0;
}