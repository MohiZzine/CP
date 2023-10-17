#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e7;

int main() {
    int n; cin >> n;
    n *= 2;
    vector<int> w(n);
    for (int i = 0; i < n; i++) cin >> w[i];
    sort(w.begin(), w.end());

    int best = MAX;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            vector<int> v;
            for (int k = 0; k < n; k++) {
                if (k == i) continue;
                if (k == j) continue;
                v.push_back(w[k]);
            }
            int wei = 0;
            for (int k = 0; k < n - 2; k += 2) {
                wei += v[k + 1] - v[k];
            }
            best = min(wei, best);
        }
    }

    cout << best;
    return 0;
}