#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string other = " ";
    long long prod = 1, zeros = 0;
    while(n--) {
        string s; cin >> s;
        if (s == "0") {
            cout << 0; return 0;
        }
        int ones = 0;
        bool beautiful = true;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '1') ones++;
            if ((s[i] != '1' && s[i] != '0') || ones > 1) {
                beautiful = false;
                break;
            }
        }

        if (beautiful) zeros += s.size() - 1;
        else other = s;
    }

    if (other == " ") cout << 1;
    else cout << other;
    for (int i = 0; i < zeros; i++) cout << 0;
    return 0;
}