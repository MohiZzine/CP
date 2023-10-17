#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    if (n % 2 == 0) cout << -1;
    else {
        vector<int> f, s;
        for (int i = 0; i < n; i++) {
            cout << i << " ";
            f.push_back(i);
        }
        int count = 0;
        cout << "\n";
        for (int i = (n - 1) / 2; count < n; i++) {
            if (i == n) i = 0;
            cout << i << " ";
            s.push_back(i);
            count++;
        }

        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << (f[i] + s[i]) % n << " ";
    }
    return 0;
}