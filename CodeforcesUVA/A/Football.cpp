//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> goals;
    while(n--) {
        string s; cin >> s;
        goals[s]++;
    }
    string win;
    int m = 0;
    for (auto x: goals) {
        if (x.second > m) {
            win = x.first;
            m = x.second;
        }
    }
    cout << win;
    return 0;
}