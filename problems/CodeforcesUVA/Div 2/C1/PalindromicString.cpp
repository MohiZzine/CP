#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int tmp = n, rev = 0;
    while(tmp) {
        rev *= 10;
        rev += (tmp % 10);
        tmp /= 10;
    }
    if (rev == n) cout << "It is a palindrome";
    else cout << "It is not a palindrome";
    return 0;
}