//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int n, k;
bool valid(int x) {
    int sum = x;
    while(x / k) {
        sum += x / k;
        k *= k;
    }
    if (sum >= n) return true;
    return false;
}

int main() {
    cin >> n >> k;
    int x = -1, z = 1000000000;
    for (int b = z; b >= 1; b /= 2) {
        while(!valid(x + b)) x += b;
    }
    printf("%d", x + 1);
    return 0;
}