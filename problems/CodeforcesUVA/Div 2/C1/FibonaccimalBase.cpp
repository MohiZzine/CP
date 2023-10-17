#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long long> fibs(1, 0);
    fibs.push_back(1);
    fibs.push_back(2);
    while(fibs[fibs.size() - 1] <= 10000 * 10000) {
        int k = fibs.size() - 1;
        fibs.push_back(fibs[k] + fibs[k - 1]);
    }

    int n; cin >> n;
    while(n--) {
        long long x, origin; cin >> x;
        origin = x;
        string sol = "";
        int i = fibs.size() - 1;
        while(fibs[i] > x) i--;
        while(i > 0) {
            if (fibs[i] > x) {
                i--;
                sol += "0";
            }
            else {
                x -= fibs[i];
                i -= 2;
                sol += "1";
            }
        }
        cout << origin << " = " << sol << " (fib)\n";
    }
    return 0;
}