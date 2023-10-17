#include <bits/stdc++.h>

using namespace std;

int d[10][10];
char a[5], b[5];
int x, y, targetX, targetY;

int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

bool valid(int i, int j) {
    return i >= 0 && i < 8 && j >= 0 && j < 8;
}

int main() {
    while(scanf("%s%s", &a, &b) != EOF) {
        memset(d, -1, sizeof(d));
        queue<pair<int, int>> q;
        y = a[0] - 'a', x = a[1] - '1';
        d[y][x] = 0;
        targetY = b[0] - 'a', targetX = b[1] - '1';
        q.push({y, x});
        while(!q.empty()) {
            int Y = q.front().first, X = q.front().second;
            q.pop();
            if (X == targetX && Y == targetY) {
                break;
            }
            for (int i = 0; i < 8; i++) {
                int newX = X + dx[i];
                int newY = Y + dy[i];
                if (valid(newY, newX)){
                    q.push({newY, newX});
                    d[newY][newX] = d[Y][X] + 1;
                }
            }
        }
        printf("To get from %s to %s takes %d knight moves.\n", a, b, d[targetY][targetX]);
    }
    return 0;
}