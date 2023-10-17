#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    char grid[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> grid[i][j];

    set<char> singles;
    set<set<char>> doubles;
    set<char> s;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            s.insert(grid[i][j]);
        }
        if (s.size() == 1) singles.insert(s.begin(), s.end());
        s.clear();
        for (int j = 0; j < 3; j++) s.insert(grid[j][i]);
        if (s.size() == 1) singles.insert(s.begin(), s.end());
        s.clear();
    }


    for (int i = 0; i < 3; i++) {
        s.insert(grid[i][i]);
    }
    if (s.size() == 1) singles.insert(s.begin(), s.end());
    s.clear();

    for (int i = 0; i < 3; i++) s.insert(grid[3 - i][i]);
    if (s.size() == 1) singles.insert(s.begin(), s.end());
    s.clear();

    cout << singles.size() << "\n";


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            s.insert(grid[i][j]);
        }
        if (s.size() == 2) {
            doubles.insert(s);
        }
        s.clear();
        for (int j = 0; j < 3; j++) s.insert(grid[j][i]);
        if (s.size() == 2) doubles.insert(s);
        s.clear();
    }


    for (int i = 0; i < 3; i++) {
        s.insert(grid[i][i]);
    }
    if (s.size() == 2) doubles.insert(s);
    s.clear();

    for (int i = 0; i < 3; i++) s.insert(grid[3 - i][i]);
    if (s.size() == 2) doubles.insert(s);
    s.clear();

    cout << doubles.size();
    return 0;
}