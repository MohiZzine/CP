//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int n, m, grid[50][50];
char right[] = {'N', 'E', 'S', 'W'};
char left[] = {'N', 'W', 'S', 'E'};

int findOrient(char c) {

}

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
int dfs(int i, int j, char orient) {
    grid[i][j] = 0;
    if (orient == 'E') {
        if (isValid(i, j + 1)) grid[i][j + 1] = 1;
        else grid[i][j] = -1;

    }
    else if (orient == 'W') {
        if (isValid(i, j - 1)) grid[i][j - 1] = 1;
        else grid[i][j] = -1;
    }
    else if (orient == 'N') {
        if (isValid(i + 1, j)) grid[i + 1][j] = 1;
        else grid[i][j] = -1;
    }
    else {
        if (isValid(i - 1, j)) grid[i - 1][j] = 1;
        else grid[i][j] = -1;
    }
}
int main() {
    cin >> n >> m;
    memset(grid, 0, sizeof grid);
    int x, y; char orient;
    while(scanf("%d", &x) != EOF) {
        cin >> y >> orient;
        grid[x][y] = 1;
        string path; cin >> path;
        for (int i = 0; i < path.length(); i++) {
            if (path[i] == 'R') {
                
            }
        }
    }
    return 0;
}