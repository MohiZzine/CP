//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>

using namespace std;


int main() {
    int N, R; cin >> N >> R;
    map<string, vector<int>> umap;
    while(N--) {
        string s;
        cin >> s;
        int B, C_D, D; cin >> B >> C_D >> D;
        vector<int> up_bound(D, 0), low_bound(D, 0), coeffs(D + 1, 0);
        for (int i = 0; i < D; i++) {
            cin >> low_bound[i] >> up_bound[i];
        }
        coeffs[D] = C_D;
        for (int i = D; i > 1; i--) {
            coeffs[i - 1] = coeffs[i] * (up_bound[i - 1] - low_bound[i - 1] + 1);
        }
        coeffs[0] = B;
        for (int j = 1; j <= D; j++) {
            coeffs[0] -= coeffs[j] * low_bound[j - 1];
        }

        umap[s] = coeffs;
    }

    while(R--) {
        string s; cin >> s;
        cout << s << "[";
        int num = umap[s].size() - 1, res = 0;
        for (int k = 0; k < num; k++) {
            if (k != 0) { cout << ", ";}
            int i; cin >> i;
            cout << i;
            res += umap[s][k + 1] * i;
        }
        res += umap[s][0];
        cout << "] = " << res <<endl;
    }

    return 0;
}
