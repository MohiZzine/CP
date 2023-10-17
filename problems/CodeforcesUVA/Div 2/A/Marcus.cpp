//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

char arr[8][8];
int count = 0;
char path[] = "IEHOVA#";
void dfs(int i, int j, int n, int m) {
    if (::count == 7) return;
    if (::count > 0) printf(" ");
    if (j > 0) {
        if (path[::count] == arr[i][j - 1]) {
            printf("left");
            ::count++;
            dfs(i, j - 1, n, m);
            return;
        }
    }
    if (j < m - 1) {
        if (path[::count] == arr[i][j + 1]) {
            printf("right");
            ::count++;
            dfs(i, j + 1, n, m);
            return;
        }
    }
    if (path[::count] == arr[i + 1][j]) {
        printf("forth");
        ::count++;
        dfs(i + 1, j, n, m);
        return;
    }

}

int main() {
    int TC; cin >> TC;
    while(TC--) {
        int n, m; cin >> n >> m;
        ::count = 0;
        for (int j = n - 1; j >= 0; j--) {
            for (int i = 0; i < m; i++)
                cin >> arr[j][i];
        }

        for (int j = 0; j < m; j++)
            if (arr[0][j] == '@') dfs(0, j, n, m);

        printf("\n");
    }
    return 0;
}