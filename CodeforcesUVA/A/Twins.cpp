//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0; cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }
    sort(coins, coins + n);
    int actual = 0, num = 0;
    while(actual <= sum && num < n) {
        sum -= coins[n - num - 1];
        actual += coins[n - num++ - 1];
    }
    printf("%d", num);
    return 0;
}