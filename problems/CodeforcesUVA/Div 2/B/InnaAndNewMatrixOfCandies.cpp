#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    set<int> s;
    bool poss = 1;
    for (int i = 0; i < n; i++) {
        int candy = 2000, dwarf = -1;
        for (int j = 0; j < m; j++) {
            char c; cin >> c;
            if (c == 'G') dwarf = max(dwarf, j);
            else if (c == 'S') candy = min(candy, j);
        }
        s.insert(candy - dwarf);
        if (candy - dwarf < 0) poss = 0;
    }

    printf("%d", !poss ? -1: s.size());
    return 0;
}