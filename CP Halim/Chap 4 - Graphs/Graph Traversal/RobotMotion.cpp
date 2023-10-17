//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

char grid[11][11], dirs[] = {'N', 'E', 'S', 'W'};
int n, m, dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1}, posX, posY, steps, loop, total;
map<pair<int, int>, int> pattern;

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

pair<int, int> direction(char c) {
    for (int i = 0; i < 4; i++) if (dirs[i] == c) return {dx[i], dy[i]};
}


int main() {
    int t;
    while(scanf("%d%d%d", &n, &m, &t), n | m | t) {
        bool valid = true;
        steps = 0; loop = 0; total = 0;
        posX = n - 1, posY = --t;
        pattern[{posX, posY}] = ++total;
        for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> grid[n - i - 1][j];

        while(true) {
            int x = direction(grid[posX][posY]).first, y = direction(grid[posX][posY]).second;
            posX += x, posY += y;
            steps++;
            if (!isValid(posX, posY)) {
                valid = false; break;
            }
            if (pattern[{posX, posY}] != 0) {
                loop = total - pattern[{posX, posY}] + 1; break;
            } else {
                pattern[{posX, posY}] = ++total;
            }
        }

        if (!valid) {
            printf("%d step(s) to exit\n", steps);
        } else {
            printf("%d step(s) before a loop of %d step(s)\n", total - loop, loop);
        }

        pattern.clear();
    }

    return 0;
}