//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int covered[1000];
int best;

int solve(string field) {
    int i = 0;
    best = 0;
    while(i < field.size()) {
        if (field[i] == '.') {
            best++;
            i += 3;
        } else {
            i++;
        }
    }
    return best;
}

int main() {
    int TC, cas = 1; cin >> TC;
    while(TC--) {
        int N; cin >> N;
        string field; cin >> field;
        printf("Case %d: %d\n", cas++, solve(field));
    }

    return 0;

}