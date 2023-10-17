//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(cin >> s) {
        if (s == "0") break;
        int k = s.length() - 1;
        int modulo = s[k--] - '0';
        int i = 1;
        while(k >= 0) {
            i *= -1;
            modulo += i * (s[k--] - '0');
        }
        if (modulo % 11 == 0) cout << s << " is a multiple of " << 11 << "." << endl;
        else cout << s << " is not a multiple of " << 11 << "." << endl;
    }


    return 0;
}