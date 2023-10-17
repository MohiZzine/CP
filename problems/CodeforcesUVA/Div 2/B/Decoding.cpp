//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s; cin >> s;
    bool right = true;
    int i = 1;
    while(i < n - i - 1) {
        printf("%c%c", s[i]);
    }
    return 0;
}