//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    while(N--) {
        int K; cin >> K;
        map<char, double> prices;
        map<char, double>::iterator it;
        double ans = 0;
        while(K--) {
            char c; cin >> c;
            double p; cin >> p;
            prices[c] = p;
        }
        int C; cin >> C;
        cin.ignore();
        while(C--) {
            string s = "";
            getline(cin, s);
            int l = s.size();
            for (int i = 0; i < l; i++) {
                it = prices.find(s[i]);
                if (it != prices.end())
                    ans += it->second;
            }
        }
        printf("%0.2f$\n", ans / 100.0);
    }
    return 0;
}
