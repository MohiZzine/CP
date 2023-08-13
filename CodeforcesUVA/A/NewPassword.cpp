//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;
char let[26];
int main() {
    int n, k; cin >> n >> k;
    for (char u = 'a'; u <= 'a' + k; u++)
        let[(int)(u - 'a')] = u;
    for (int i = 0; i < n; i++)
        cout << let[i % k];
    return 0;
}