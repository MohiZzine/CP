//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
        sum += n[i] - '0';

    if (n.length() == 1) {
        printf("0"); return 0;
    }
    int ans = 1;
    while(sum >= 10) {
        ans++;
        int k = sum;
        sum = 0;
        while(k) {
            sum += k % 10;
            k /= 10;
        }
    }
    printf("%d", ans);
    return 0;
}