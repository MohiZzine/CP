//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int energy = 0, ans = 0;
    while(n--) {
        int k; cin >> k;
        if (energy - k < 0) {
            ans += (k - energy);
            energy +=
        }
    }
    return 0;
}