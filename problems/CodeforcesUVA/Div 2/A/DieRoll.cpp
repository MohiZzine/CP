//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a: gcd(b, a % b);
}
int main() {
    int Y, W; cin >> Y >> W;
    int r = 6 - max(Y, W) + 1;
    if (r == 6) printf("1/1");
    else printf("%d/%d", r / gcd(r, 6), 6 / gcd(r, 6));
    return 0;
}