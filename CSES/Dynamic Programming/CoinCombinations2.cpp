//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

unordered_set<int> coins;

int main() {
    int n, x;
    cin >> n >> x;
    while(n--) {
        int k; cin >> k;
        coins.insert(k);
    }

    return 0;
}