//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    int ans = 0;
    cin >> a >> b;
    if (a == b) printf("-1");
    else if (a.size() > b.size()) printf("%d", a.size());
    else printf("%d", b.size());
    return 0;
}