//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n = 131071;
    char c;
    int ans = 0;
    while(cin >> c) {
        ans = c - '0';
        while(cin >> c) {
            if (c == '#') break;
            ans = ans * 2 + c - '0';
            ans %= n;
        }
        if (ans % n)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}