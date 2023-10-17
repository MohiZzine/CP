//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_set<int> s;
    int i = 0;
    while(i++ < 4) {
        int k; cin >> k;
        s.insert(k);
    }
    printf("%d", 4 - s.size());
    return 0;
}