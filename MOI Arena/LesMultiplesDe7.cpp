//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, best = 0, bestCur = 1, cur, last; cin >> n;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cin >> cur; continue;
        }

        last = cur;
        cin >> cur;
        if ((last + cur) % 7 == 0) bestCur++;
        if (bestCur > best) best = bestCur;
        else bestCur = 0;
    }
    cout << best;
    return 0;
}