#include <bits/stdc++.h>

using namespace std;

bool isLower(char x) {
    return x >= 'a' && x <= 'z';
}

bool isUpper(char y) {
    return y >= 'A' && y <= 'Z';
}

float dist(float i, float j, float x, float y) {
    return sqrt(pow(i - x, 2) + pow(j - y, 2));
}

int main() {
    int n, m, x;
    set<pair<float, float>> shifts;
    cin >> n >> m >> x;
    char grid[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') shifts.insert(make_pair((float)i, (float)j));
        }

    int q; cin >> q;
    string s; cin >> s;
    int ans =0;
    for (int k = 0; k < q; k++) {
        char l = s[k];
        bool possible = false;
        if (isLower(l)) {
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    if (grid[i][j] == x) possible = true;
            if (possible) continue;
            else {
                ans = -1; break;
            }
        }
        if (isUpper(l)) {
            bool oneHand = false;
            float u, v;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++)
                    if (grid[i][j] == tolower(l)) {
                        u = (float)i;
                        v = (float)j;
                        possible = true; continue;
                    }
            }
            if (possible) {
                for (auto pr: shifts) {
                    if (dist(pr.first, pr.second, u, v) <= (float)x) {
                        oneHand = true; continue;
                    }
                }
            } else {
                ans = -1; break;
            }
            if (oneHand) continue;
            else ans++;
        }
    }
    cout << ans;
    return 0;
}