#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    while(scanf("%d%d", &M, &N), N | M) {
        vector<pair<int, int>> teams(M);
        vector<pair<int, int>> tables(N);
        for (int i = 0; i < M; i++) {
            cin >> teams[i].first;
            teams[i].second = i + 1;
        }

        for (int i = 0; i < N; i++) {
            cin >> tables[i].first;
            tables[i].second = i + 1;
        }

        sort(tables.begin(), tables.end(), greater<pair<int, int>>());
        sort(teams.begin(), teams.end(), greater<pair<int, int>>());

        if (M > N) {
            cout << 0 << endl; continue;
        }
        bool ok = true;
        vector<vector<int>> ans(M);
        for (int i = 0; i < M; i++) {
            if (tables[i].first < M) {
                ok = false; break;
            }
            for (int k = 1; k <= teams[i].first; k++) {
                ans[i].push_back(tables[k - 1].second);
            }
        }
        if (!ok) cout << 0 << endl;
        else {
            cout << 1 << endl;
            for (int i = 0; i < M; i++) {
                for (int j = 0; j < ans[i].size(); j++) {
                    cout << ans[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}