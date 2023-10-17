#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int a = s.size() / 2;
    int m, arr[a]; cin >> m;
    memset(arr, 0, sizeof arr);
    for (int i = 0; i < m; i++) {
        int k; cin >> k;
        arr[--k]++;
    }
    for (int i = 0; i < a; i++) {
        arr[i] += arr[i - 1];
    }

    for (int i = 0; i < s.size(); i++) {
        if (i < a) printf("%c", (arr[i] & 1)? s[s.size() - i - 1]: s[i]);
        else printf("%c", (arr[s.size() - i - 1] & 1)? s[s.size() - i - 1]: s[i]);
    }
    return 0;
}