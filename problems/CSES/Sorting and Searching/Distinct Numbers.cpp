#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bitset<1000000001> bs;
    while(n--) {
        int k; cin >> k; bs[k] = 1;
    }

    cout << bs.count();
    return 0;
}
