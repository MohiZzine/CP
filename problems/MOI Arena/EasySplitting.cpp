#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long m; cin >> m;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int count = 0; long long sum = 0;
    int i = 0;
    while(i < n) {
        count++;
        while(sum + v[i] <= m) {
            i++;
            sum += v[i];
        }
        sum = 0;
    }

    cout << count;
    return 0;
}