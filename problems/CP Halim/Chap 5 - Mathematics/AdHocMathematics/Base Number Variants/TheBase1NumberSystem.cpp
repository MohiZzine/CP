#include <bits/stdc++.h>

using namespace std;

int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);

    string s;
    while(cin >> s) {
        if (s == "~") break;
        string equiv = "";
        char flag;
        istringstream iss(s);
        do {
            if (s == "#") break;
            else if (s == "0") flag = '1';
            else if (s == "00") flag = '0';
            else {
                equiv += string(s.size() - 2, flag);
            }
        } while(cin >> s);

        int ans = 0;
        for (int i = 0; i < equiv.size(); i++) {
            ans <<= 1;
            ans += equiv[i] - '0';
        }
        cout << ans << endl;
    }
    return 0;
}