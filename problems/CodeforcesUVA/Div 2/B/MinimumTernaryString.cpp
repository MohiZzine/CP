#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int zeros = 0, ones = 0, twoes = 0;
    for (int i = 0; i < s.size(); i++) {
        bool found = false;
        if (s[i] == '1') ones++;
        else if (s[i] == '0') zeros++;
        else if (s[i] == '2') found = true, twoes++;
        if (found) {

            while(i < s.size() && s[i] != '0') {
                if (s[i] == '1') ones++;
                else if (s[i] == '2') twoes++;
                i++;
            }
            while(zeros--) cout << 0;
            while(ones--) cout << 1;
            if (i != s.size()) {
                while(twoes--) cout << 2;
            }
            zeros++;
            i++;
            found = false;
        }
    }
    return 0;
}