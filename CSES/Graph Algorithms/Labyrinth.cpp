//
// Created by Student on 26/08/2023.
//

#include <bits/stdc++.h>

using namespace std;

int n, m;
pair<int, int> st, ed;
char grid[1010][1010];

dfs(int i, int j) {
    
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') st = {i, j};
            if (grid[i][j] == 'B') ed = {i, j};
        }


    }


    return 0;
}