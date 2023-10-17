//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0; cin >> n;
    while(n--) {
        char c; cin >> c;
        if (c == 'A') ans++;
        else ans--;
    }
    if (ans > 0) printf("Anton");
    else if (ans < 0) printf("Danik");
    else printf("Friendship");
    return 0;
}