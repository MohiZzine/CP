#include <bits/stdc++.h>

using namespace std;

const int SIZE = 3005;
vector<double> ai(SIZE), ci(SIZE);
double solve(int i) {
    if (ai[i] != -1) return ai[i];
    return ai[i] = (ai[i - 1] + ai[i + 1]) / 2 - ci[i];
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        ai.assign(SIZE, -1);
        ci.assign(SIZE, - 1);
        cin >> ai[0] >> ai[n + 1];
        for (int i = 0; i < n; i++) cin >> ci[i];
        printf("%lf\n", solve(1));
    }
    return 0;
}