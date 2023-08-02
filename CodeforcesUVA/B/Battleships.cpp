//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;
int N, ans;
char grid[110][110];
bool traversed[110][110];

void dfs(int i, int j) {
    if (i >= N ||j >= N || i < 0 || j < 0) return;
    if (grid[i][j] == '.') return;
//    traversed[i][j] = true;
    grid[i][j] = '.';
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);
}

int main() {
    int T, cas = 1; cin >> T;
    while(T--) {
        ans = 0;
        memset(traversed, 0, sizeof traversed);
        cin >> N;
        for (int i = N - 1; i >= 0; i--)
            for (int j = 0; j < N; j++)
                cin >> grid[i][j];


        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (grid[i][j] == 'x') {
                    dfs(i, j); ans++;
                }
            }
        }
        printf("Case %d: %d\n", cas++, ans);
    }
    return 0;
}