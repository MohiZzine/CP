// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int xa, ya, xb, yb; cin >> xa >> ya >> xb >> yb;
    if (xa > xb) swap(xa, xb);
    if (ya > yb) swap(ya, yb);
    int n; cin >> n;


    set<pair<int, int>> warm, sick;
    for (int i = xa; i <= xb; i++) {
        sick.insert({i, ya});
        sick.insert({i, yb});
    }

    for (int j = ya; j <= yb; j++) {
        sick.insert({xa, j});
        sick.insert({xb, j});
    }

    while(n--) {
        int xi, yi, ri; cin >> xi >> yi >> ri;
        for (auto it = sick.begin(); it != sick.end(); it++) {
            if (pow((*it).first - xi, 2) + pow((*it).second - yi, 2) <= ri * ri) {
                sick.erase(it);
            }
        }

    }

    cout << sick.size();

    return 0;
}
