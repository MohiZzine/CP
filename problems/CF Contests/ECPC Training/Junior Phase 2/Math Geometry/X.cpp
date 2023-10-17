#include <bits/stdc++.h>

using namespace std;

int main() {
    long double x1, y1, x2, y2, x3, y3, x4, y4; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    long double x = min(min(x1, x2), x3), X = max(max(x1, x2), x3);
    long double y = min(min(y1, y2), y3), Y = max(max(y1, y2), y3);

    int n; cin >> n;
    while(n--) {
        int xi, yi; cin >> xi >> yi;
        if (xi >= x && xi <= X && yi >= y && yi <= Y) cout << "YES";
        else cout << "NO";
        cout <<"\n";
    }
    return 0;
}