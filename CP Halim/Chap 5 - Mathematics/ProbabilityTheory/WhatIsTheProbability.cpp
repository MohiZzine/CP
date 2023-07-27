//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int S; cin >> S;
    while(S--) {
        int N; cin >> N;
        double p; cin >> p;
        int I; cin >> I;
        if (p == 0)
            printf("0.0000\n");
        else {
            double ans = (p * pow(1 - p, I - 1)) * (1 / (1 - pow(1 - p, N)));
            cout << fixed << setprecision(4) << ans << endl;
        }
    }
    return 0;
}