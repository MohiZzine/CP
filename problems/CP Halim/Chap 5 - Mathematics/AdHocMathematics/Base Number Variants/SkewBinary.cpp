// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    while(cin >> s) {
        if (s == "0") break;
        reverse(s.begin(), s.end());
        int k = 0;
        long long ans = 0;
        while(k < s.size()) {
            int base = pow(2, k + 1) - 1;
            ans += base * (s[k] - '0');
            k++;
        }

        cout << ans << endl;
    }
}
