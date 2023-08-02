//
// Created By MOHI
//
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main() {
    int n; cin >> n;
    bool present[26], ans = true;
    for (int i = 0; i <= 26; i++)
        present[i] = false;
    while(n--) {
        char letter; cin >> letter;
        present[(int)tolower(letter) - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
        if (!present[i]) { ans = false; break; }
    if (ans) printf("YES");
    else printf("NO");
    return 0;
}