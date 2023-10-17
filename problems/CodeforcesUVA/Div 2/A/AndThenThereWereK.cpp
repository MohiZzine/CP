#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int k = (1 << (int)log2(n)) - 1;
        cout << k << "\n";
    }
    //dsdss
    return 0;
}