//
// Created by ADMIN on 17/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

const int MAX = 50;
int k;
string s, first, second;
long long combi[MAX + 1][MAX + 1];

int main() {
    for (int i = 0; i <= MAX; i++) combi[i][0] = 1, combi[i][i] = 1;
    for (int i = 0; i <= MAX; i++) {
        for (int j = 1; j < i; j++) combi[i][j] = combi[i - 1][j] + combi[i - 1][j - 1];
    }

    int T, cases = 1; cin >> T;
    while(T--) {
        cin >> s;
        size_t sep = s.find('+'), exp = s.find('^');
        first = s.substr(1, sep - 1);
        second = s.substr(sep + 1, s.find(')') - sep - 1);
        k = stoi(s.substr( exp + 1));
        printf("Case %d: ", cases++);
        int i = k;
        while(i >= 0) {
            if (i == k) {
                cout << first;
                if (k > 1) cout << "^" << k;
                cout << "+";
            }
            else if (i == 0) {
                cout << second;
                if (k > 1) cout << "^" << k;
            }
            else {
                cout << combi[k][i] << "*";
                cout << first;
                if (i > 1) cout << "^" << i;
                cout << "*";
                cout << second;
                if (k - i > 1) cout << "^" << k - i;
                cout << "+";
            }
            i--;
        }
        cout << "\n";
    }

    return 0;
}