//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int grid[4][4];
bool isValid(int x, int y) {
    return (x >= 0 && x < 4) && (y >= 0 && y < 4);
}

bool dfs(int x, int y) {
    if (isValid(x, y) && isValid(x + 1, y + 1) && isValid(x, y + 1) && isValid(x + 1, y)) {
        return (grid[x][y] + grid[x + 1][y + 1] + grid[x][y + 1] + grid[x + 1][y] != 2);
    }
    return false;
}

int main() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            char k; cin >> k;
            if (k == '.') grid[4 - i - 1][j] = 1;
            else grid[4 - i - 1][j] = 0;
        }

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            if (dfs(i, j)) {
                cout << "YES"; return 0;
            }
        }

    cout << "NO"; return 0;
    return 0;
}