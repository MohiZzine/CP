#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ANS = 0, total = 0;

    while(ANS < n && total + v[ANS] <= x) {
        total += v[ANS];
        ANS++;
    }

    cout << ANS;
    return 0;
}