//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

char grid[110][110];
int n, m, posX, posY, dir;
char dirs[] = {'N', 'L', 'S', 'O'};
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}


int main() {
    int s;
    while(scanf("%d%d%d", &n, &m, &s), n | m | s) {
        int ans = 0;
        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++){
            cin >> grid[n - i - 1][j];
            for (int k = 0; k < 4; k++) if (grid[n - i - 1][j] == dirs[k]) posX = n - i - 1, posY = j, dir = k;
        }

        string S; cin >> S;
        for (int i = 0; i < s; i++) {
            char x = S[i];
            if (x == 'D') {
                dir = (dir + 1) % 4;
            }
            else if (x == 'E') {
                dir = (dir + 3) % 4;
            }

            else if (x == 'F') {
                int newX = posX + dx[dir], newY = posY + dy[dir];
                if (!isValid(newX, newY) || grid[newX][newY] == '#') continue;
                posX += dx[dir];
                posY += dy[dir];
                if (grid[posX][posY] == '*') ans++, grid[posX][posY] = '.';
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}