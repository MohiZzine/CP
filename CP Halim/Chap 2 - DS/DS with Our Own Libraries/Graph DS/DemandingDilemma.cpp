//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adjList(10);


int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edgeList(m);
        int mat[n][m];
        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> mat[i][j];

        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (mat[i][j] == 1) {
                    edgeList[j].push_back(i);
                }
            }
        }
        bool valid = true;
        for (int i = 0; i < m; i++) {
            if (edgeList[i].size() != 2) {
                valid = false; break;
            }
        }
        if (!valid) cout << "No";
        else {
            set<pair<int, int>> verticesPair;

            for (int i = 0; i < m; i++) {
                verticesPair.insert({edgeList[i][0], edgeList[i][1]});
            }

            if (verticesPair.size() == m) cout << "Yes";
            else cout << "No";
        }
        cout << endl;
    }
    return 0;
}