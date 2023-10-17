#include <bits/stdc++.h>

using namespace std;

char orient[] = {'N', 'E', 'S', 'W'};
int dx[] = {0, 1, -1, 0};
int dy[] = {1, 0, 0, -1};


int main() {
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF) {
        bool lost[n][m] = {false}
        int x, y, direct; cin >> x >> y;
        char dir; cin >> dir;
        for (int i = 0; i < 4; i++) {
            if (orient[i] == dir) {
                direct = i;
                break;
            }
        }

        string path; cin >> path;
        for (int i = 0; i < path.size(); i++) {
            int dX, dY;
            for (int j = 0; j < 4; j++) {
                if (orient[j] == path[i]) dX = dx[j], dY = dy[j];
            }

            int nextX = x + dX, nextY = y + dY;
            if (nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) {
                lost[x][y] = true;
                cout << x << " " << y << " LOST\n";
            }
        }
    }
    return 0;
}