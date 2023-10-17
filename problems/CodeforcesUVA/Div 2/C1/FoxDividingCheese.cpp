//
// Created by farid on 17/08/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b; cin >> a >> b;
    map<int, int> amap, bmap;
    set<int> s = {2, 3, 5};
    for (int d: s) {
        while(a % d == 0) {
            a /= d;
            amap[d]++;
        }
        while(b % d == 0) {
            b /= d;
            bmap[d]++;
        }
    }

    if (a != b) {
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    while(amap[5] != bmap[5]) {
        if (amap[5] > bmap[5]) {
            amap[5]--;
        }
        else if (amap[5] < bmap[5]) {
            bmap[5]--;
        }
        ans++;
    }
    while(amap[3] != bmap[3]) {
        if (amap[3] > bmap[3]) {
            amap[3]--;
        }
        else if (amap[3] < bmap[3]) {
            bmap[3]--;
        }
        ans++;
    }

    while(amap[2] != bmap[2]) {
        if (amap[2] > bmap[2]) {
            amap[2]--;
        }
        else if (amap[2] < bmap[2]) {
            bmap[2]--;
        }
        ans++;
    }

    for (auto x: amap) a *= amap[x.first];
    for (auto y: bmap) b *= bmap[y.first];
    if (a == b) cout << ans;
    else cout << -1;
    return 0;
}