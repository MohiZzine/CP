//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    unordered_set<char> letters;
    for (int i = 0; i < s.length(); i++) {
        letters.insert(s[i]);
    }
    if (letters.size() & 1) printf("IGNORE HIM!");
    else printf("CHAT WITH HER!");
    return 0;
}