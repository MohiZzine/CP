#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, last; cin >> n;
    vector<int> first, second;
    long long f = 0, s = 0;
    while(n--) {
        int k; cin >> k;
        if (k > 0) {
            f += k;
            first.push_back(k);
        } else {
            s += (-k);
            second.push_back(-k);
        }
        if (n == 0) last = k;
    }

    if (f < s) cout << "second";
    else if (f > s) cout << "first";
    else {
        int a = first.size(), b = second.size();

        int i = 0, winner = 0;
        while(i < min(a, b)) {
            if (first[i] > second[i]) {
                winner = 1;
                break;
            } else if (first[i] < second[i]) {
                winner = -1;
                break;
            }
            i++;
        }
        if (winner) {
            if (winner == 1) cout << "first";
            else cout << "second";
        } else {
            if (a > b) {
                cout << "first";
            } else if (a < b) cout << "second";
            else {
                if (last > 0) cout << "first";
                else cout << "second";
            }
        }
    }
    return 0;
}