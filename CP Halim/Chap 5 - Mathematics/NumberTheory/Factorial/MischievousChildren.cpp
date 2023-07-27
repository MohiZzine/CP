//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

long long vals[21];
long long fact(int n) {
    if (n == 0 || n == 1) return 1;
    vals[n] = n * fact(n - 1);
    return vals[n];
}


int main() {
    int T, num = 1; cin >> T;
    while(T--) {
        map<char, int> m;
        string s; cin >> s;
        int k = s.size();
        for (int i = 0; i < k; i++)
            m[s[i]]++;
        long long ans = fact(k);
        for (auto x: m)
            ans /= fact(x.second);
        printf("Data set %d: %lld\n", num++, ans);
    }
    return 0;
}