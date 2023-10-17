//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int N;
int mat[100][100], dfs_num[100];
//unordered_set<int> reachable;

void dfs(int k, int m) {
    dfs_num[k] = 1;
    for (int i = 0; i < N; i++) {
        if (mat[k][i] != 1 && i != m)
            dfs(i, m);
    }
}

int main() {
    int TC, cases = 1; cin >> TC;
    while(TC--) {
        cin >> N;
        int dom[N][N];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> mat[i][j];

        memset(dfs_num, 0, sizeof (dfs_num));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == j || i == 0) {
                    dom[i][j] = 1; continue;
                } else {
                    dfs(0, 100);
                    if (dfs_num[j] == 1) {
                        memset(dfs_num, 0, sizeof(dfs_num));
                        dfs(0, i);
                        if (dfs_num[j] == 0) dom[i][j] = 1;
                        else dom[i][j] = 0;
                    } else dom[i][j] = 0;
                }
            }
        }

        printf("Case %d:\n", cases++);
        for (int i = 0; i < 2* N + 1; i++) {
            if (i % 2 == 0) {
                printf("+");
                for (int j = 0; j < 2 * N - 1; j++) {
                    printf("-");
                }
                printf("+\n");
            } else {
                printf("|");
                for (int j = 0; j  < 2*N - 1; j++) {
                    if (j % 2 == 0) {
                        printf("|");
                    } else {
                        printf("%c", dom[i][j] == 1 ? 'Y': 'N');
                    }
                }
                printf("|\n");
            }
        }
    }
    return 0;
}