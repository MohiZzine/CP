#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    queue<int> q;
    while(n--) {
        int a, b; cin >> a >> b;
        if (a == 1) {
            q.push(b);
        } else {
            if (q.front() == b) cout << "Yes";
            else cout << "No";
            cout << "\n";
            q.pop();
        }
    }
    return 0;
}